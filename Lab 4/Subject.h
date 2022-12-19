#include <iostream>

using namespace std;

class Subject {
    public:
        int f() {
            cout << "f() called" << endl;
            return 1;
        }

        char g() {
            cout << "g() called" << endl;
            return 'a';
        }

        void h() {
            cout << "h() called" << endl;
        }
};