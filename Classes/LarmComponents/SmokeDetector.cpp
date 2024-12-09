#include "SmokeDetector.h"

SmokeDetector::SmokeDetector(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent) : LarmComponent(componentId, customerId, isActiveComponent, isConnectedComponent){}

std::string SmokeDetector::DetectAlarm()
{
    return "This method is not finished yet";
}