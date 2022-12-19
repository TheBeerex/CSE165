// CSE 165 -- Lab 6 -- Part 1
// myClass const var

#include <iostream>
#include <string>

using namespace std;

class myClass {
    public:
        const float f1;
        float f2;

        myClass(float f) :  f1(f) {
            this->f2 = f;
        }
};



int main() {
    myClass* mine = new myClass(0.2);

    cout << to_string(mine->f1) << endl;
    cout << to_string(mine->f2) << endl;

    delete mine;

    return 1;
}