#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    int year;
};

int main() {
    Car *c = new Car;

    c->brand = "BMW";
    c->year = 2020;

    cout << "Brand: " << c->brand << endl;
    cout << "Year: " << c->year << endl;

    delete c; // free memory

    return 0;
}
