#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
#include "person.h"

class aircraft{
public:
    aircraft(std::string callsign,person thePilot,person theCoPilot);

    person pilot;
    person co_pilot;
    std::string sign;

    void setPilot(person thePilot);
    person getPilot();
    void setCoPilot(person theCoPilot);
    person getCoPilot();
    void printDetails();

    ~aircraft();
};

#endif