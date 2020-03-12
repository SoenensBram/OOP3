#include <iostream>

using namespace std;

int square(int value) {
    int result = value * value;
    return result;
}

void generate_values(int numbers){
    int values[numbers];
    for(int i=0; i<numbers;i++){
        values[i] = i*i;
        cout << values[i] << "  ";
    }
    cout << endl;
}

int * new_array(int size){
    int * myNewArray = new int[size];
    return myNewArray;
}

int main (void){
    cout << "Hello and welcom to dynamic memory" << endl;

    // Automatic or scoped local variables = Stack
    int wantToSquare = 12;
    int squaredValue = square(wantToSquare);

    int numbers = 0;
    cout << "How manny numbers would you like to generate? ";
    cin >> numbers;
    generate_values(numbers);

    // Dynamic memory on the heap
    int * myNewArray = new_array(numbers);

    delete[] myNewArray;
    myNewArray = nullptr; // of = 0;

    return 0;
}

// Valgrind is usefull for searching memleaks