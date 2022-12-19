// Lab 5 Question 3
// mod AddVirtuals.cpp

#include <iostream>
#include <string>

using namespace std;

class Pet {
    string pname;
  public: 
    Pet(const string& petName) : pname(petName) {}
    
    virtual string name() = 0;

    virtual string speak() = 0;
};

string Pet::name() { return pname; }

class Dog : public Pet {
  public:
    Dog(const string& petName) : Pet(petName) {}

    virtual string sit() {
        return Pet::name() + " sits";
    }

    string speak() {
        return Pet::name() + " says 'Bark!'";
    }

    string name() { 
        return Pet::name(); 
    }
};

int main() {
    Pet* goodboy = new Dog("Brewster");

    cout << goodboy->speak() << endl;

    delete goodboy;
}