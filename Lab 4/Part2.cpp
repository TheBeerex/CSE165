// CSE 165 Lab 4 Part 2
// Pointer Args 2

#include <iostream>

using namespace std;

int** pointerfun(int** arr, int n){
    int** temp = arr;

    int** newArr = new int*[n];
    for (int i = 0; i < n; i++) {
        newArr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            newArr[i][j] = i*j;
        }
    }

    delete temp;
    
    return newArr;
}

int main () {
    int size = 3;

    int** intArr = new int*[size];
    for (int i = 0; i < size; i++) {
        intArr[i] = new int[size];
        for (int j = 0; j < size; j++) {
            intArr[i][j] = 0;
        }
    }

    cout << "pre pointerfun: " << intArr << "    { ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << intArr[i][j] << "; ";
        }
    }
    cout << "}" << endl;

    intArr = pointerfun(intArr, size);

    cout << "post pointerfun: " << intArr << "    { ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << intArr[i][j] << "; ";
        }
    }
    cout << "}" << endl;

    return 0;
}