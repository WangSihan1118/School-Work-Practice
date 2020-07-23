#ifndef WEATHEROFFICE_H
#define WEATHEROFFICE_H
#include <string>
#include <vector>
#include "WeatherStation.hpp"
using namespace std;
class WeatherOffice
{
private:
    vector<WeatherStation> stations;
    string name;
public:
    WeatherOffice();
    vector<WeatherStation> get_stations();
    string get_name();
    void add_stations(WeatherStation w);
};

#endif