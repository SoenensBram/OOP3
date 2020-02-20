#include "motor.h"

#include <iostream>

namespace Vehicle{

    Motor::Motor(void){
        std::cout << "Constructing Motor" << std::endl;
    }

    Motor::Motor(int capacity){
        std::cout << "Constructing Motor with capacity of "<< capacity << std::endl;
        this->capacity = capacity;
    }
};