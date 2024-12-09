#include <iostream>
#include "Classes\JsonHandler.h"

int main()
{
    JsonHandler jsonHandler;
    std::vector<Customer> customers;
    customers = jsonHandler.parseCustomers();

    for (const auto customer : customers)
    {
        std::cout << "Customer: " << customer.getName() << std::endl;
        for (const auto user : customer.getUsers())
        {
            std::cout << "User: " << user.getName() << std::endl;
        }
    }

    return 0;
}