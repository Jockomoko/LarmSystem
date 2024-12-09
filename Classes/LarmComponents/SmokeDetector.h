#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H
#include <string>
#include "LarmComponent.h"

class SmokeDetector : LarmComponent
{
public:
SmokeDetector(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent);
    std::string DetectAlarm() override;
};
#endif // SMOKEDETECTOR_H