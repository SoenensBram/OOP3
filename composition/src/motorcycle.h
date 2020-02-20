#pragma once

#include "motor.h"
#include "battery.h"

namespace Vehicle{

    class Motorcycle{

        public:
            Motorcycle(void); //Constructor van motor en battery zijn genest in de constructor van motorcycle
            Motorcycle(double voltage, int capaticty);

        private:
            Motor motor;
            Battery battery;
    };

};