#include<iostream>
using namespace std;

struct Base {
    int a = 1;
    virtual ~Base() {}
};

struct Drv1: Base {
    float x = 3.14;
};

struct Drv2: Base {
    int y = 3;
};

int main() {
    // Base *b = new Drv1;
    // cout << b->x << endl;
    Drv1 *b = new Drv1;
    cout << b->x << endl;
}