/*Author: Yahui Chen
 *
 *Description: this class is responsible to store the hard copy data
 *
 *Date:  October 25th 2013 3:54am
 */

#ifndef STUB_H
#define STUB_H

#include <QString>
#include <vector>
#include <city.h>

namespace Ui {
class MainWindow;
}

class Stub
{
public:
    Stub();
    ~Stub();
    std::vector<City> getCities();
    int getMaxData();

private:
    std::vector<City> cities;
    int max;
};

#endif // STUB_H
