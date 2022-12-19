// CSE 165 --- Lab 7
// Part 2 --- mySimpleClass


#include <iostream>
#include <cstring>

using namespace std;

class mySimpleClass {
    public:
        int x;
        mySimpleClass(int i) {
            this->x = i;
        }
        void print(ostream& out) {
            out << x << endl;
        }
};

int operator + ( mySimpleClass &obj1, mySimpleClass &obj2) {
    return obj1.x + obj2.x;
}
int operator * ( mySimpleClass &obj1, mySimpleClass &obj2) {
    return obj1.x * obj2.x;
}

int main() {
    mySimpleClass a = mySimpleClass(5);
    mySimpleClass b = mySimpleClass(3);

    mySimpleClass* c = new mySimpleClass( (a * b) + (b * b) );

    c->print(cout);
    
    return 1;
}