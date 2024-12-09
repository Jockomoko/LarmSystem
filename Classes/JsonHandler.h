#ifndef JSONHANDLER_H
#define JSONHANDLER_H
#include <string>
#include "customer.h"

class JsonHandler
{
public:
    JsonHandler();
    std::string createJson();
    std::vector<Customer> readJson(const std::string &json);
    bool writeToJson(std::vector<Customer> customers);

private:
    std::string json;
};
#endif // JSONHANDLER_H