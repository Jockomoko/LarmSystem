#ifndef LARMCOMPONENT_H
#define LARMCOMPONENT_H
#include <string>
class LarmComponent
{
private:
    int componentId;
    int customerId;
    bool is_activeComponent;
    bool is_ConnectedComponent;

public:
    LarmComponent(int customerId, int componentId) : customerId(customerId), componentId(componentId)
    {
    }
    virtual std::string DetectAlarm();
};
#endif // LARMCOMPONENT_H
