#include <iostream>

using namespace std;


void swap(int *number1, int *number2){
    int number3 = *number1;
    *number1 = *number2;
    *number2 = number3;
}

void print_array(int numbers[], unsigned int length){
    cout << "Size of nubers (print array) = " << sizeof(numbers) << endl;
    for(unsigned int i = 0; i < length; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void print_pointer(int *numbers, unsigned int length){
    cout << "Size of nubers (print array) = " << sizeof(numbers) << endl;
    for(unsigned int i = 0; i < length; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void coppy_array(int * source, int * destination, unsigned int length){
    for (unsigned int i = 0; i < length; i++){
        destination[i] = source[i];
        //*(destination + i) = *(source + i);
    }
}

void copy_to(char * source, char * destination, unsigned int length){   //Ook wel memcoppy genoemd
    for (unsigned int i = 0; i < length; i++){
        destination[i] = source[i];
    }
}

int main(void){
    cout << "Demo of pointers" << endl << endl;

    int number = 42;
    cout << "Address of number = " << &number << endl;
    cout << "Interger size = " << 8*sizeof(int) << " bits" << endl;
    cout << "Long size = " << 8*sizeof(long) << " bits" << endl;
    cout << "Long Long size = " << 8*sizeof(long long) << " bits" << endl;

    int * pointerToNumber = &number;

    cout << "Address of number = " << pointerToNumber << endl;
    cout << "Address of pointerToNumber = " << &pointerToNumber << endl;

    //Dereferencing
    cout << "Orriginal number: " << *pointerToNumber << endl;
    *pointerToNumber = 88;
    cout << "Changed number: " << *pointerToNumber << endl;
    cout << "Changed number: " << number << endl;

    //Size of  pointer
    cout << "Size of an address = " << 8*sizeof(int *)<< endl;

    int valA = 10;
    int valB = 20;
    cout << "valA = " << valA << " and valB = " << valB << endl;
    cout << "Swaping..." << endl;
    swap(&valA, &valB);
    cout << "valA = " << valA << " and valB = " << valB << endl;

    //array
    int primes[] = {2,3,5,7};

    cout << "Size of primes: " << sizeof(primes) << endl;
    for (int i =0; i < sizeof(primes)/sizeof(int); i++){
        cout << primes[i] << "";
    }
    cout << endl;

    cout << "Address of primes: " << primes << endl;

    int * pointerToPrimes = primes;
    cout << "Second element " << pointerToPrimes[1] << endl; //[] doen auto dereferencing
    //Array = constant pointer to first element

    pointerToPrimes = &(primes[2]);

    cout << "First value = " << *primes << endl;
    cout << "Second value = " << *(primes+1) << endl;
    pointerToPrimes = primes;
    pointerToPrimes++;
    cout << "Second value = " << *pointerToPrimes << endl;

    //Can't be done with primes
    //primes = &(primes[2]);

    int magicNumber = 0xAABBCCDD;
    char * buffer = (char*)&magicNumber; //casting
    // int truncated = (int)13.4;

    cout << (buffer[0] && 0xFF) << " " << (buffer[1] && 0xFF) << endl;

    print_array(primes, sizeof(primes)/sizeof(int));
    print_pointer(primes, sizeof(primes)/sizeof(int));

    int source[] = { 1, 2, 3, 4, 5, 6};
    int SIZE_SOURCE = sizeof(source)/sizeof(int);
    int destination[SIZE_SOURCE] = {0};
    print_array(destination, SIZE_SOURCE);
    coppy_array(source, destination, SIZE_SOURCE);
    print_array(destination, SIZE_SOURCE);

    char writeBuffer[128];
    copy_to((char*)source, writeBuffer, sizeof(source));
    // 5 x 4 = 20 bytes

    // Serialize
    double pi = 3.14;
    copy_to((char*)&pi, writeBuffer, sizeof(double));

    // Deserialize
    double newPi = 0;
    copy_to(writeBuffer, (char*)&newPi, sizeof(double));
    cout << "Pi = " << newPi << endl;
    return 0;
}
