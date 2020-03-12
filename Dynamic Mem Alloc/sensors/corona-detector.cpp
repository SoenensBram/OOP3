#include "corona-detector.h"

namespace Pandemic {
    CoronaDetector::CoronaDetector(std::string nameInput, double temperatureInput){
        Name = nameInput;
        temperature = temperatureInput;
    }

    CoronaDetector::CoronaDetector(std::string nameInput)
    : CoronaDetector(nameInput, 36.7){
    }

    CoronaDetector::CoronaDetector(void)
    : CoronaDetector("Anonymous"){}


    bool CoronaDetector::is_infected(double temperature){
        this->temperature = temperature;
        return temperature < 38.2;
    }
    
    bool CoronaDetector::is_infected(void){
        return is_infected(temperature);
    }

    std::string CoronaDetector::getName(void){
        return Name;
    }


};