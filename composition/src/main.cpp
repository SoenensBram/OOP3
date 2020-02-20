#include <iostream>
#include "./../libs/motorcycle.h"

using namespace std;
using namespace Vehicle;

int main(){
    cout <<"Welcome to motorcycle -example of composition" << endl;

    Motorcycle motorcycle;
    Motorcycle vroom(6, 300);

    return 0;
}