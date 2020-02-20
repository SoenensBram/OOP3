#include "motorcycle.h"

#include <iostream>

namespace Vehicle{

    //Explicit call to constructor Battery(double) using constructor initialization list
    // Motorcycle::Motorcycle(void)
    // : battery(12.0),motor(1200){
    //     std::cout << "Constructing Motorcycle" << std::endl;
    // }

    Motorcycle::Motorcycle(void)
    : Motorcycle(12.0, 900){
        
    }

    Motorcycle::Motorcycle(double voltage, int capaticty)
    : battery(voltage),motor(capaticty){
        std::cout << "Constructing Motorcycle" << std::endl;
    }
};