// Lab 2 - Part 2
// Exercise-4 on Page 299
// Header

#include <iostream>

using namespace std;

class Potato;

class Tomato {
    public:
        int batchNum;

        Tomato(int batch) {
            this->batchNum = batch;
        }

        int takePotato(Potato* pot);
};

class Potato {
    public:
        int batchNum;
        
        Potato(int batch) {
            this->batchNum = batch;
        }

        int takeTomato(Tomato* tom);
};