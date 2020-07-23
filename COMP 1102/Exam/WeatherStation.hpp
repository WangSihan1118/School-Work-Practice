#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H
#include <time.h>
#include "TemperatureReading.hpp"
class WeatherStation
{
private:
    int id;
    TemperatureReading readings[1000];
    time_t establishment_date;
    float latitude;
    float longitude;
public:
    WeatherStation();
    int get_id();
    TemperatureReading* get_readings();
    float get_latitude();
    float get_longitude();
    time_t get_current_time();
    void add_reading(TemperatureReading t);
};
#endif WEATHERSTATION_H