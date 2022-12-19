#include "Part2-h.h"

int Tomato::takePotato(Potato* pot) {
    cout << "Took Potato from batch# " << pot->batchNum << endl;
    return pot->batchNum;
}

int Potato::takeTomato(Tomato* tom) {
    cout << "Took Tomato from batch# " << tom->batchNum << endl;
    return tom->batchNum;
}