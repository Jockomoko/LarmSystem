#include "user.h"

User::User(int userId, int customerId, std::string &name, std::string &password) : userId(userId), customerId(customerId), name(name), password(password){}

    //Getters
     int User::getUserId() const
     {
        return userId;
     }
     int User::getCustomerId() const
      {
        return customerId;
     }
     std::string User::getName() const
      {
        return name;
     }
     std::string User::getPassWord() const
      {
        return password;
     }
    
    //Setters
    void User::setName(const std::string &newName)
     {
        this -> name = newName;
     }
    void User::setPassword(const std::string &newPassword)
     {
        this -> password = newPassword;
     }