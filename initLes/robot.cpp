
#include "robot.h"

namespace Universe{

    Robot::Robot(void){
        set_name("");
    };

    Robot::Robot(std::string name){
        set_name(name);
    };

    std::string Robot::get_name(void){
        return name;
    };

    void Robot::set_name(std::string name){
        this -> name = name;
    };

    // :: scope resolution operator
    std::string Robot::say_hello(void){
        return "Hello my name is " + name;
    };
    std::string Robot::say_bey(void){
        return "Bye, nu zijn onze studenten anders.";
    };
};