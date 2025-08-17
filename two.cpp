#include<iostream>
using namespace std;

struct Animal {
    float x_pos = 1;
    float y_pos = 2;
};

struct FlyAnimal: public Animal {
    float z_pos = 3;
};

void printAnimals(Animal *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "(" << a[i].x_pos << ", " << a[i].y_pos << ")" << endl;
    }
};

int main() {
    FlyAnimal *arr = new FlyAnimal[5];
    printAnimals(arr, 5);
    delete[] arr;
}