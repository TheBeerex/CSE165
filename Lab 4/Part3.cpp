// CSE 165 Lab 4 Part 3
// Proxy

#include "Proxy.h"

using namespace std;

int main() {
    Subject* imp1 = new Subject;
    Subject* imp2 = new Subject;
    Proxy* prox1 = new Proxy(imp1);
    Proxy* prox2 = new Proxy(imp2);

    cout << "Implementation 1" << endl;
    prox1->f();
    prox1->g();
    prox1->h();

    cout << "Implementation 2" << endl;
    prox2->f();
    prox2->g();
    prox2->h();

    return 0;
}