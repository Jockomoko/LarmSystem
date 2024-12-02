#ifndef USER_H
#define USER_H
#include <iostream>

class User
{
private:
    int userId;
    std::string name;
    std::string password;

public:
    User(std::string &name, std::string &password) : name(name), password(password){}
    
     std::string getName() const;
     std::string getPassWord() const;
     int getId() const;
    
    void setName(const std::string &newName);
    void setPassword(const std::string &newPassword);

};
#endif // user_H