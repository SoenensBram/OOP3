#pragma once
#include <string>

namespace Pandemic {

    class CoronaDetector {

        public:
            CoronaDetector(void);
            CoronaDetector(std::string nameInput);
            CoronaDetector(std::string nameInput, double temperatureInput);
            bool is_infected(double temperature);
            bool is_infected(void);
            std::string getName(void);
        
        private:
            std::string Name;
            double temperature;


    };
};