#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H
#include <string>

class SmokeDetector
{
private:
    int amount;

public:
SmokeDetector(int amount) : amount(amount){}
    std::string DetectAlarm()
    {
    }
};
#endif // SMOKEDETECTOR_H