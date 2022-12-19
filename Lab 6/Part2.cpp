// CSE 165 -- Lab 6 -- Part 2
// namespace fun

#include "myHeader2.h"

void test1() {
    mySpace::fun1();
    mySpace::fun2();
}

void test2() {
    using namespace mySpace;
    
    fun3();
    fun4();
}

int main() {
    test1();
    test2();

    return 1;
}