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

    private:
    int year;
    double temp, rain;
};
