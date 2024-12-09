#ifndef RFID_h
#define RFID_h
#include "User.h"

class Rfid
{
private:
int rfId;
int userId;
public:
Rfid(int rfId, int userId);

//Getters
int getRfId() const;
int getUserId() const;

//Setters
void setRfId(const int newRfId);

void setUserId(const int newUserId);

};

#endif