#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student students[3] = {
        {"Ahmet", 19},
        {"Ayse", 20},
        {"Mehmet", 21}
    };

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": "
             << students[i].name << ", "
             << students[i].age << endl;
    }

    return 0;
}
