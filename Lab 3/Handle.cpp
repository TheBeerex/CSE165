//: C05:Handle.cpp {O}
// Handle implementation
#include "Handle.h"
// Define Handle's implementation:
struct Handle::Cheshire {
    int i;
};
Handle::Handle(int val = 0) {
    smile = new Cheshire;
    smile->i = val;
}
Handle::~Handle() {
    delete smile;
}
int Handle::read() {
    return smile->i;
}
void Handle::change(int x) {
    smile->i = x;
} ///:~ 