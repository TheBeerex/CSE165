#include "Subject.h"

using namespace std;

class Proxy : Subject {
    Subject* sub;

    public:
        Proxy(Subject* s) {
            sub = s;
        }
        
        int f() {
            return sub->f();
        }

        char g() {
            return sub->g();
        }

        void h() {
            sub->h();
        }
};