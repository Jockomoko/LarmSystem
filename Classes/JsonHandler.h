#ifndef JSONHANDLER_H
#define JSONHANDLER_H
#include <string>
#include <fstream>
#include <iostream>
#include "json.hpp"
#include "customer.h"

using namespace nlohmann;

class JsonHandler
{
public:
    json parseJSON();
    // void writeJSON(const json &jsonData);
    std::vector<Customer> parseCustomers();

private:
    std::string filePath = "..//DataBase/Customer.json";
};
#endif // JSONHANDLER_H