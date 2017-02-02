#include "city.h"

City::City()
{
    cityName = "";
    eight = 0;
    nine = 0;
    ten = 0;
    eleven = 0;
    twelve = 0;
}

City::~City()
{
}

void City::setCityName(QString name)
{
    this->cityName = name;
}

void City::setEight(double d)
{
    this->eight = d;
}

void City::setNine(double d)
{
    this->nine = d;
}

void City::setTen(double d)
{
    this->ten = d;
}

void City::setEleven(double d)
{
    this->eleven = d;
}

void City::setTwelve(double d)
{
    this->twelve = d;
}

QString City::getCityName()
{
    return this->cityName;
}

double City::getEight()
{
    return this->eight;
}

double City::getNine()
{
    return this->nine;
}

double City::getTen()
{
    return this->ten;
}

double City::getEleven()
{
    return this->eleven;
}

double City::getTwelve()
{
    return this->twelve;
}

//double* City::getData()
//{
//    return data;
//}
