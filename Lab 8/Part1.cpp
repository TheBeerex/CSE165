// CSE 165 - Lab 8
// Part 1 - template fib

#include <iostream>

using namespace std;

template <class T>
T fibonacci(T n){
    T a = 0;
    T b = 1;
    T c;

    if( n == 0)
        return a;
    
    for(int i = 2; i <= n; i++) {
       c = a + b;
       a = b;
       b = c;
    }
    
    return b;
}

int main() {

    cout << fibonacci(90) << endl;

    return 0;
}