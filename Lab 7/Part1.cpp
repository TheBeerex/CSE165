// CSE 165 --- Lab 7
// Part 1 --- myClass & memset()


#include <iostream>
#include <cstring>

using namespace std;

class myClass {
    char myArr[100];
    public:
        myClass(char c = ' ') {
            memset(myArr, c, 100);
        }
        void print() {
            puts(myArr);
        }
};

int main() {
    myClass* mine = new myClass('c');

    mine->print();

    delete[] mine;

    return 1;
}