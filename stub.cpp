#include "stub.h"

/*
 *Function name: Stub
 *Description: constructor
 *Parameters: null
 *Return: null
 */
Stub::Stub()
{
    QString cityName[10]  = { QString("Barrie"), QString("Calgary"), QString("Hamilton"), QString("London"),
                               QString("Ottawa"), QString("Sudbury (Greater)"), QString("Thunder Bay"),
                               QString("Toronto"), QString("Windsor"), QString("Winnipeg")
                             };

    double cityData[10][3] = { {0.843, 0.780, 0.843}, {0.630, 0.594, 0.630}, {0.661, 0.984, 0.661}, {1.033, 1.073, 1.033},
                               {0.841, 0.932, 0.841}, {1.312, 1.378, 1.312}, {1.797, 1.475, 1.797}, {0.901, 0.953, 0.901},
                               {1.381, 1.640, 1.381}, {1.666, 0, 1.666}
                             };
//    for(int i = 0; i < 10; i ++) {
//        City *city = new City(cityName[i], cityData[i][0], cityData[i][1], cityData[i][2]);
//        cities.push_back(*city);
//    }

    max = 0;

    for(int i = 0; i < 10; i ++) {
        for(int j = 0; j < 3; j ++) {
            if(cityData[i][j] > max) {
                max = cityData[i][j];
            }
        }
    }
}

/*
 *Function name: getCities
 *Description: the information of cities (Vector<City>)
 *Parameters: null
 *Return: std::vector<City>
 */
std::vector<City> Stub::getCities()
{
    return cities;
}

/*
 *Function name: getMaxData
 *Description: get the biggest double data
 *Parameters: null
 *Return: int (biggest data)
 */
int Stub::getMaxData()
{
    return (int) (max + 1);
}
