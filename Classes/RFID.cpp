#include "RFID.h"

Rfid::Rfid(int rfid, int userId) : rfId(rfId), userId(userId) {}

// Getters
int Rfid::getRfId() const
{
    return rfId;
}
int Rfid::getUserId() const
{
    return userId;
}

// Setters
void Rfid::setRfId(const int &newRfId)
{
    rfId = newRfId;
}
void Rfid::setUserId(const int &newuserId)
{
    userId = newuserId;
}