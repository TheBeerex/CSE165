// Lab 2 - Part 1
// Exercise-18 on Page 274
// Char* function

#include <iostream>
#include <cstring>

using namespace std;

char* strCopy(char* strIn) {
    // determine length of strIn
    size_t length = 0;
    char* p = strIn;
    while (*p != '\0') {
        length++;
        *p++;
    }
    length++; // account for NULL terminator

    char* strOut = new char[length]; // allocate strOut
    strcpy(strOut, strIn); // copy strIn to strOut

    return strOut;
}

int main() {
    char* str1 = "STRING";

    char* str2 = strCopy(str1);

    //print str1 address and contents
    cout << "str1:    " << (void*) str1 << "    \"" << str1 << "\"" << endl;

    //print str2 address and contents
    cout << "str2:    " << (void*) str2 << "    \"" << str2 << "\"" << endl;

    delete[] str2;

    return 0;
}

