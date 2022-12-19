// Lab 5 Question 1
// Counted class

#include <iostream>

using namespace std;

class Counted {
    int id;
    static int count;
  public:
    Counted() : id(count++) {
        cout << "created " << id << endl;
    }
    ~Counted() {
        cout << "destroyed " << id << endl;
    }
};

int Counted::count = 0;

int main() {
    Counted c1;
    Counted c2;

    return 0;
}