#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    char initial;
};

void displayPerson(Person p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Initial: " << p.initial << endl;
}

int main() {
    Person p;
    p.name = "Zeynep";
    p.age = 22;
    p.initial = 'Z';

    displayPerson(p);

    return 0;
}
