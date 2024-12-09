#ifndef LARMCOMPONENT_H
#define LARMCOMPONENT_H
#include <iostream>

class LarmComponent
{
private:
    int componentId;
    int customerId;
    bool isActiveComponent;
    bool isConnectedComponent;

public:
    LarmComponent(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent);

    // Getters
    int getComponentId();
    int getCustomerId();
    bool getActiveComponent();
    bool getConnectedComponent();

    // Setters
    void setActiveComponent(bool isActive);
    void setConnectedCompont(bool isConnected);
    virtual std::string DetectAlarm();
};
#endif // LARMCOMPONENT_H
