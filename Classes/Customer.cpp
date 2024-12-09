#include "Customer.h"

Customer::Customer(int id, const std::string &name) : id(id), name(name) {}

// Getters
std::string Customer::getName() const
{
    return name;
}
int Customer::getId() const
{
    return id;
}
std::vector<User> Customer::getUsers() const
{
    return users;
}
std::vector<LarmComponent> Customer::getLarmComponents() const
{
    return larmComponents;
}

// Setters
void Customer::setName(const std::string &name)
{
    this->name = name;
}
void Customer::addUser(const User &user)
{
    users.push_back(user);
}
void Customer::addLarmComponent(const LarmComponent &larmComponent)
{
    larmComponents.push_back(larmComponent);
}