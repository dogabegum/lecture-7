#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    char initial;
};

int main() {
    Person p;
    p.name = "Ali";
    p.age = 21;
    p.initial = 'A';

    Person *ptr = &p;

    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Initial: " << ptr->initial << endl;

    return 0;
}
