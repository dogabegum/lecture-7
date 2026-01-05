#include <iostream>
#include <functional>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    function<int(int,int)> f1 = add;

    function<int(int,int)> f2 = [](int a, int b) {
        return a * b;
    };

    cout << "Addition: " << f1(3, 4) << endl;
    cout << "Multiplication: " << f2(3, 4) << endl;

    return 0;
}
