#include <iostream>
#include <vector>
#include "corona-detector.h"

using namespace std;

int main(void){
    cout << "Welcome to sensors" << endl;

/*
    Pandemic::CoronaDetector detector("Loete");
    if(detector.is_infected(39)){
        cout << detector.getName() << " maybe infected" << endl;
    }else{
        cout << detector.getName() << " is probable in the clear" << endl;
    }
*/

    std::vector<Pandemic::CoronaDetector *> people;

    bool keepAsking = true;
    do{
        std::string name;
        cout << "Please enter person name: ";
        cin >> name;
        if(name != "STOP"){
            double temperature = 0;
            cout << "Please enter temperature of " << name << ": ";
            cin >> temperature;
            Pandemic::CoronaDetector * detector = new Pandemic::CoronaDetector(name, temperature);
            people.push_back(detector);
        }else{
            keepAsking = false;
        }
        
    } while(keepAsking);

    // Afterwards
    for (int i = 0; i < people.size(); i++){
        Pandemic::CoronaDetector * detector = people[i];

        if(detector->is_infected()){
            cout << detector->getName() << " maybe infected" << endl;
        }else{
            cout << detector->getName() << " is probable in the clear" << endl;
        }
    }

    // De-allocate detectors
    for (int i = 0; i < people.size(); i++){
        delete people[i];
    }
    people.clear();

    return 0;
}