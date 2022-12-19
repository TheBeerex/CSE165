// CSE 165 - Lab 8
// Part 2 - Exception

#include <iostream>

using namespace std;

class MyClass {
	public:
		class MyException  {
			public:
				MyException(const char*str) {
					data = str;
				}
				void printException() const {
					cout << data; 
				}
			private:
				const char* data;
		};

		void myFun() {
			throw MyException("This is an exception from MyClass::myFun()");
		}
};

int main() {

	try {
		MyClass myObj;
		myObj.myFun();
	}
	catch (MyClass::MyException& ex) {
		cout << "Exception detected: ";
        ex.printException();
        cout << endl;
	}

return 0;
}