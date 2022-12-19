// CSE 165 Lab 3 Part 2
// Text class

#include "Text.cpp"

using namespace std;

int main() {
    Text* textObject = new Text("myFile.txt");

    cout << textObject->contents() << endl;

    delete textObject;

    return 0;
}