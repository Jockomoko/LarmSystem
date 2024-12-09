#include "DoorBreaker.h"

DoorBreaker::DoorBreaker(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent) : LarmComponent(componentId, customerId, isActiveComponent, isConnectedComponent) {}

std::string DoorBreaker::DetectAlarm()
{
    if (getConnectedComponent() == true)
    {
        if (getActiveComponent() == true)
        {
            return getComponentId() + " Detects a door break!\n";
        }
        else
        {
            return getComponentId() + " is DEACTIVE!\n";
        }
    }
    else
    {
        return getComponentId() + " is DECONNECTED!\n";
    }
}