// CSE 165 Lab 4 Part 1
// Pointer Args 1

#include <iostream>

using namespace std;

int* pointerfun(int* point){
    int* temp = point;
    point = new int(17);
    delete temp;
    return point;
}

int main () {
    int* myINT = new int(6);
    cout << "pre pointerfun: " << myINT << "    " << *myINT << endl;
    myINT = pointerfun(myINT);
    cout << "post pointerfun: " << myINT << "    " << *myINT << endl;
    return 0;
}