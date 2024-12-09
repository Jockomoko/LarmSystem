#ifndef DOORBREAKER_H
#define DOORBREAKER_H
#include <string>
#include "LarmComponent.h"

class DoorBreaker : LarmComponent
{
    public:
    DoorBreaker(int componentId, int customerId, bool isActiveComponent, bool isConnectedComponent);
    std::string DetectAlarm() override;
};
#endif // DOORBREAKER_H