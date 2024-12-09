#include "JsonHandler.h"
#include <json.hpp>

JsonHandler::JsonHandler() : json("") {}

std::string JsonHandler::createJson()
{
    Json::Value root;
    // Add data to root
    Json::StreamWriterBuilder writer;
    json = Json::writeString(writer, root);
    return json;
}

std::vector<Customer> JsonHandler::readJson(const std::string &json)
{
    std::vector<Customer> customers;
    Json::CharReaderBuilder reader;
    Json::Value root;
    std::string errs;
    std::istringstream s(json);
    std::string errs;
    if (Json::parseFromStream(reader, s, &root, &errs))
    {
        for (const auto &customer : root["customers"])
        {
            Customer c;
            c.name = customer["name"].asString();
            c.id = customer["id"].asInt();
            customers.push_back(c);
        }
    }
    return customers;
}

bool JsonHandler::writeToJson(std::vector<Customer> customers)
{
    Json::Value root;
    for (const auto &customer : customers)
    {
        Json::Value c;
        c["name"] = customer.name;
        c["id"] = customer.id;
        root["customers"].append(c);
    }
    Json::StreamWriterBuilder writer;
    json = Json::writeString(writer, root);
    return true;
}