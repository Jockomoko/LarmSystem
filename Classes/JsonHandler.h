#ifndef JSONHANDLER_H
#define JSONHANDLER_H
#include <string>

class JsonHandler
{
public:
    JsonHandler();
    std::string createJson();
    void parseJson(const std::string &json);

private:
    std::string json;
};
#endif // JSONHANDLER_H