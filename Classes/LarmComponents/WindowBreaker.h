#ifndef WINDOWBREAKER_H
#define WINDOWBREAKER_H
#include <string>
#include "LarmComponent.h"

class WindowBreaker : LarmComponent
{
public:
    WindowBreaker(int componentId, int customerId) : LarmComponent(customerId, componentId) {}

    std::string DetectAlarm() override;
};
#endif // WINDOWBREAKER_H