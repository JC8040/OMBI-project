#ifndef CITY_H
#define CITY_H
#include <QString>

class City
{
    public:
        City();
        ~City();
        void setCityName(QString Name);
        void setEight(double);
        void setNine(double);
        void setTen(double);
        void setEleven(double);
        void setTwelve(double);
        QString getCityName();
        double getEight();
        double getNine();
        double getTen();
        double getEleven();
        double getTwelve();

    private:
        QString cityName;
        double eight;
        double nine;
        double ten;
        double eleven;
        double twelve;
};

#endif // CITY_H
