#include "LarmComponent.h"

LarmComponent::LarmComponent(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent) : componentId(componentId), customerId(customerId), isActiveComponent(isActiveComponent), isConnectedComponent(isConnectedComponent) {}

// Getters
int LarmComponent::getComponentId()
{
    return componentId;
}
int LarmComponent::getCustomerId()
{
    return customerId;
}
bool LarmComponent::getActiveComponent()
{
    return isActiveComponent;
}
bool LarmComponent::getConnectedComponent()
{
    return isConnectedComponent;
}

// Setters
void LarmComponent::setActiveComponent(bool isActive)
{
    isActiveComponent = isActive;
    if (isActiveComponent == true)
    {
        std::cout << componentId << " is now ACTIVE" << std::endl;
    }
    else if (isActiveComponent == false)
    {
        std::cout << componentId << "is now DEACTIVE" << std::endl;
    }
}
void LarmComponent::setConnectedCompont(bool isConnected)
{
    isConnectedComponent = isConnected;
    if (isConnectedComponent == true)
    {
        std::cout << componentId << " is now CONNECTED" << std::endl;
    }
    else if (isConnectedComponent == false)
    {
        std::cout << componentId << "is now DECONNECTED" << std::endl;
    }
}