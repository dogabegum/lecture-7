#include <iostream>
using namespace std;

class MathOps {
public:
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    MathOps obj;

    float (MathOps::*ptr)(float, float) = &MathOps::add;

    float result = (obj.*ptr)(3.5f, 2.0f);

    cout << "Result: " << result << endl;

    return 0;
}
