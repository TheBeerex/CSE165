// Lab 2 - Part 2
// Exercise-4 on Page 299
// Some Classes

#include "Part2-i.cpp"

int main() {
    Potato* pot = new Potato(37);

    Tomato* tom = new Tomato(12);

    pot->takeTomato(tom);

    tom->takePotato(pot);

    delete tom;
    delete pot;

    return 0;
}