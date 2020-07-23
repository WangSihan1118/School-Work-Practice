#ifndef TEMPERATUREREADING_H
#define TEMPERATUREREADING_H
#include <time.h>
class TemperatureReading
{
private:
    time_t date;
    float temp;
public:
    TemperatureReading();
    time_t get_date();
    float get_temp();
};
#endif TEMPERATUREREADING_H