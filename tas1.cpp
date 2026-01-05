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
    p.name = "Doğa";
    p.age = 20;
    p.initial = 'D';

    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Initial: " << p.initial << endl;

    return 0;
}
