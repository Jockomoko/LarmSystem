#include "WindowBreaker.h"

WindowBreaker::WindowBreaker(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent) : LarmComponent(componentId, customerId, isActiveComponent, isConnectedComponent){}

std::string WindowBreaker::DetectAlarm()
{
    return "This method is not finished yet";
}