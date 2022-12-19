// Lab 1 - Part 1
// Exercise 2 on page 120
// Area of a circle

#include <iostream>
#include <string>

using namespace std;

const double PI = 3.14159265358979323846;

int main() {
    // Request radius of a circle (integer)
    int radius = 0;
    cout << "Enter a radius (integer):    ";
    cin >> radius;

    // Calculate area of a circle
    double area = radius * radius * PI;
    cout.precision(6);
    cout << "Area of the circle is " << area << endl;

    return 0;
}