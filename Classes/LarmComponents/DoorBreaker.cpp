#include "DoorBreaker.h"

DoorBreaker::DoorBreaker(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent) : LarmComponent(componentId, customerId, isActiveComponent, isConnectedComponent){}

std::string DoorBreaker::DetectAlarm()
{
    return "This method is not finished yet";
}