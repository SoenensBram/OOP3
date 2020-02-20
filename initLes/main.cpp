//Comments 

#include <iostream> 
//voor in en outputs te kunnen gebruiken

// #include "robot.h" 
// kijkt in dezelfde map als de code file of include own library

using namespace std; 
//soort van container voorkomt ook borstingen met gelijknamige functies van andere code/ containers

//Prototypes
namespace MyMath{
    int MyMath::sum(int left, int right);
};


// Entry point 
int main(){
    cout <<"Hello world" << endl; 
    // << is in pijl naar waar we een waarde pushen (redirection operator)
    // endl is de buffer flushen en zorgt er ook vooe dat we op een nieuwe lijn komen
    
    std::cout <<"Bye Bye"<<std::endl;
    //This hos to output without "using namespace std"
    
    // Variables
    int number = 15;
    // int C en C++ ligt de lengte van een int niet vast

    int notInitialized;
    //opgepast Niet geinitaiseerde getallen neemt gewoon wat er al in mem zit!! er niet van uit gaan dat het nul is

    cout << "Not initiliazed: " << notInitialized << endl;

    char x = 'X'; //char tussen single quotes
    char k = '\n'; //Escape Character newline

    double raduis = 3.5566; //double is minnstens even naukeurig is een float

    // Constants
    const int SIZE = 32; //constanten altijd in hoofdletter schrijven
    #define STUDENTS 42; //alles met een # is een preprocessor directif (is een search and replace) meer geheugen efficient

    // Math
    int sum =0;
    int a = 1;
    int b = 2; 

    sum = a+b;

    // Integer Devision
    int quotient = a/b; //0
    double result = a/b; //0.0
    
    double realDevision = (double)a/b; //(double) is casten naar een double
    double anotherRealDevision = 1.0*a/b; 
    //binaire operator heeft 2 operatoren nodig
    cout << "Real Devison: " << realDevision << endl;

    //Compount operators
    int p = 0;
    p += 4; //Compound, same as p = p + 4
    p %= 2; //% = modulo operator (remainder -rest bij deling)


    int i = 5;
    int y = 3;

    i++;
    ++i;
    // i=7

    y = i++; //y=7, i=8
    // eerst I naar Y toewijzen en dan I met verhogen
    cout << "y: " << endl;

    y = ++i; //y=9, i=9
    // eerst I ver hogen met 1 en dan toewijzen aan Y
    cout << "y: " << endl;

    //Comparison
    bool isTrue = true;
    bool isFalse = false;

    cout << "true? " << isTrue <<endl;
    // boolian is een getal als getal = 0 dan False anders is het True

    //short ciruiting/lazy evaluation bij vb or als je de eerste true tegen komt dan evalueert men der rest niet meer

    cout << "The sum : " << MyMath::sum(4,12)<< endl;

    return 0;
    //status van de code weergeven
}


int MyMath::sum(int left, int right){
    return left + right;
}

//Arrays
// altijd eerst size of arry evalueren door lazy evaluation!!

// hoofdstuk 1 en 2 klaar

//compilen met "g++ 'filename' -o 'filenameOut'"