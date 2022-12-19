// Lab 5 Question 2
// Counted Vector

#include <iostream>
#include <vector>

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
    int getID() {
        return id;
    }
};

int Counted::count = 0;

int main() {
    vector<Counted*> v;

    for(int i = 0; i < 10; i++) {
        v.push_back(new Counted);
    }

    cout << "Vector of size " << v.size() << " created" << endl << endl << endl << "Printing contents:    { ";

    for(int i = 0; i < 10; i++) {
        cout << v[i]->getID() << "; ";
    }
    cout << "}" << endl << endl << endl;

    cout << "Destroying vector " << endl;

    while (v.size() > 0) {
        Counted* temp = v.back();
        v.pop_back();
        delete temp;
    }

    return 0;
}