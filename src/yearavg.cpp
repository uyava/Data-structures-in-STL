#include "yearavg.h"

YearAvg::YearAvg(double _temp, int _year, double _rain):temp(_temp),year(_year),rain(_rain)
{

}

void YearAvg::setTemp(double _temp)
{
    temp = _temp;
}

void YearAvg::setYear(int _year)
{
    year = _year;
}

void YearAvg::setRain(double _rain)
{
    rain = _rain;
}

double YearAvg::getTemp()
{
    return temp;
}

int YearAvg::getYear()
{
    return year;
}
double YearAvg::getRain()
{
    return rain;
}