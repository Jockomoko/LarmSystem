#ifndef USER_H
#define USER_H
#include <iostream>

class User
{
private:
    int userId;
    int customerId;
    std::string name;
    std::string password;

public:
    User(int userId, int customerId, std::string &name, std::string &password);
    
    //Getters
     int getUserId() const;
     int getCustomerId() const;
     std::string getName() const;
     std::string getPassWord() const;
    
    //Setters
    void setName(const std::string &newName);
    void setPassword(const std::string &newPassword);

};
#endif // user_H