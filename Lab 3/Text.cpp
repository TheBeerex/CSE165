# include "Text.h"

#include <iostream>
#include <fstream>

using namespace std;

Text::Text() {
    this->str = "";
}

Text::Text(string file) {
    this->str = "";
    this->readFile(file);
}

void Text::readFile(string file) {
    ifstream ifs(file);
    string content( (istreambuf_iterator<char>(ifs) ), (istreambuf_iterator<char>() ) );
    this->str = content;
}

string Text::contents() {
    return str;
}