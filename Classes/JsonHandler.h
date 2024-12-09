#ifndef JSONHANDLER_H
#define JSONHANDLER_H
#include <string>
#include <fstream>
#include "customer.h"

class JsonHandler
{
public:
    nlohmann::json parseJSON();
    void writeJSON(const nlohmann::json &jsonData);
    std::vector<Customer> parseCustomers();

private:
    std::string filePath = "..//DataBase/Customer.json";
    nlohmann::json jsonData;
};
#endif // JSONHANDLER_H