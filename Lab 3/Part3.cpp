// CSE 165 Lab 3 Part 3
// int array traversal with pointers

#include <iostream>

using namespace std;

int main() {
    int size = 10;
    int* arr = new int[size];
    
    int i;
    for (int i = 0; i < size; i++) {
        *(arr+i) = i * size;
    }

    cout << "arr { ";
    for (int i = 0; i < size; i++) {
        cout << *(arr+i) << "; ";
    }
    cout << "}" << endl;

    return 0;
}