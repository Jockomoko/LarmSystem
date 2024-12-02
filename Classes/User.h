#include <iostream>

class User
{
private:
    int user_id;
    std::string name;
    std::string password;

public:
    User(std::string name, std::string password) : name(name), password(password){}
};
