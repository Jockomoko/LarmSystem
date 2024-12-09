#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "User.h"
#include "LarmComponents/LarmComponent.h"

class Customer
{
public:
    Customer(int id, const std::string &name);

    // Getters
    std::string getName() const;
    int getId() const;
    std::vector<User> getUsers() const;
    std::vector<LarmComponent> getLarmComponents() const;

    // Setters
    void setName(const std::string &name);
    void addUser(const User &user);
    void addLarmComponent(const LarmComponent &larmComponent);

private:
    int id;
    std::string name;
    std::vector<User> users;
    std::vector<LarmComponent> larmComponents;
};

#endif // CUSTOMER_H