#include<iostream>
using namespace std;

struct Animal {
    float x_pos = 1;
    float y_pos = 2;
    virtual ~Animal() {};
};

struct FlyAnimal: public Animal {
    float z_pos = 3;
};

void printAnimals(Animal **a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "(" << a[i]->x_pos << ", " << a[i]->y_pos << ")" << endl;
    }
};

int main() {
    Animal **a = new Animal*[5];
    for (int i = 0; i < 5; i++) {
        a[i] = new FlyAnimal;
    }

    printAnimals(a, 5);

    for (int i = 0; i < 5; i++) {
        delete a[i];
    }

    delete[] a;
}