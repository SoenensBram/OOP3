#include "battery.h"

#include <iostream>

namespace Vehicle{

    Battery::Battery(double voltage){
        std::cout << "Constructing Battery of " << voltage << std::endl;
        this->voltage = voltage;
    };
};