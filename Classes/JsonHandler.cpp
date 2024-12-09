#include "JsonHandler.h"

nlohmann::json JsonHandler::parseJSON()
{
    json jsonData;
    std::ifstream file(filePath);
    file >> jsonData;
    file.close();
    return jsonData;
}

std::vector<Customer> JsonHandler::parseCustomers()
{
    json customerData = parseJSON();

    std::vector<Customer> customers;
    if (!customerData.empty())
    {
        for (auto customer : customerData["Customers"])
        {
            int id = customer["id"].get<int>();
            std::string name = customer["name"].get<std::string>();
            Customer newCustomer(id, name);
            for (const auto user : customer["users"])
            {
                int userId = user["userId"].get<int>();
                int customerId = user["customerId"].get<int>();
                std::string userName = user["name"].get<std::string>();
                std::string password = user["password"].get<std::string>();
                User newUser(userId, customerId, userName, password);
                newCustomer.addUser(newUser);
            }
            for (const auto larmComponent : customer["larmComponents"])
            {
                int componentId = larmComponent["componentId"].get<int>();
                int customerId = larmComponent["customerId"].get<int>();
                bool isActiveComponent = larmComponent["isActiveComponent"].get<bool>();
                bool isConnectedComponent = larmComponent["isConnectedComponent"].get<bool>();
                LarmComponent newLarmComponent(componentId, customerId, isActiveComponent, isConnectedComponent);
                newCustomer.addLarmComponent(newLarmComponent);
            }
            customers.push_back(newCustomer);
        }
    }
    else
    {
        std::cout << "No data in file" << std::endl;
    }
}
// void JsonHandler::writeJSON(const nlohmann::json &jsonData)
// {
//     std::ofstream file(filePath);
//     file << jsonData.dump(4);
//     file.close();
// };
