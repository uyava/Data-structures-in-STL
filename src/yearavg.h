#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

class YearAvg
{
    public:
    //constructor
    YearAvg(double _temp, int _year, double _rain);

    //"setters"
    void setTemp(double _temp);
    void setYear(int _year);
    void setRain(double _rain);

    //"getters"
    double getTemp();
    int getYear();
    double getRain();

    private:
    int year;
    double temp, rain;
};
