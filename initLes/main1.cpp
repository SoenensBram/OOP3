#include <iostream>
#include "robot.h"

using namespace std;

int main(){

    std::cout << "Welcome to class demo" << endl;


    //Object Of Robot
    Universe::Robot franky("Franky");
    Universe::Robot unknown;
    cout << franky.say_hello() << endl;
    cout << franky.say_bey() << endl;

    return 0;
}