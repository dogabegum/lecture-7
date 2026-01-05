#include <iostream>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    bool (*funcPtr)(int, int) = compare;

    int x = 10, y = 7;
    cout << "Is x > y? " << funcPtr(x, y) << endl;

    return 0;
}
