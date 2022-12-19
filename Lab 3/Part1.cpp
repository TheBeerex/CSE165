// CSE 165 Lab 3
// Part 1 - Handle Mods

#include "Handle.cpp"
#include <iostream>

using namespace std;

int main() {
    Handle* handy1 = new Handle();
    Handle* handy2 = new Handle(17);

    cout << "handy1: " << handy1->read() << endl;
    cout << "handy2: " << handy2->read() << endl;

    handy1->change(5);
    
    cout << "changed handy1 to: " << handy1->read() << endl;

    delete handy1;
    delete handy2;

    return 0;
}