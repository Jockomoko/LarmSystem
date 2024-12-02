#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "User.h"
#include "LarmComponents/LarmComponent.h"

class Customer
{
public:
    Customer(const std::string &name, int id);

    // Getters
    std::string getName() const;
    int getId() const;
    std::vector<User> getUsers() const;
    std::vector<LarmComponent> getLarmComponents() const;

    // Setters
    void setName(const std::string &name);
    void setId(int id);
    void addUser(const User &user);
    void addLarmComponent(const LarmComponent &larmComponent);

private:
    std::string name;
    int id;
    std::vector<User> users;
    std::vector<LarmComponent> larmComponents;
};

#endif // CUSTOMER_H