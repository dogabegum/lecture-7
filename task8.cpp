#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    if (a > b) return a;
    return b;
}

int main() {
    cout << "Max int: " << maximum(10, 25) << endl;
    cout << "Max double: " << maximum(3.14, 2.71) << endl;

    return 0;
}
