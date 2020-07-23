#include "aircraft.h"
#include <iostream>

aircraft::aircraft(std::string callsign,person thePilot,person theCoPilot)
{
    sign = callsign;
    pilot = thePilot;
    co_pilot = theCoPilot;
}

void aircraft::setPilot(person thePilot)
{
    pilot = thePilot;
}

person aircraft::getPilot()
{
    return pilot;
}
void aircraft::setCoPilot(person theCoPilot)
{
    co_pilot = theCoPilot;
}
person aircraft::getCoPilot()
{
    return co_pilot;
}
void aircraft::printDetails()
{
    std::cout<<sign<<std::endl;
    std::cout<<pilot.name<<std::endl;
    std::cout<<co_pilot.name<<std::endl;
}

aircraft::~aircraft()
{
    
}