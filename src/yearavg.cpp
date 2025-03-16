#include "yearavg.h"

//constructor
YearAvg::YearAvg(double _temp, int _year, double _rain):temp(_temp),year(_year),rain(_rain)
{

}

//setters
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

//getters
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

const std::string YearAvg::toCSV() 
{
	std::ostringstream myStream;

	myStream << temp;
	std::string tempStr = myStream.str();
	myStream.str("");

	myStream << year;
	std::string yearStr = myStream.str();
	myStream.str("");

	myStream << rain;
	std::string rainStr = myStream.str();

	return tempStr + "," + yearStr + "," + rainStr;

}