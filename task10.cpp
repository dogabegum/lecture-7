#include <iostream>
using namespace std;

void printAscii(char c) {
    cout << "ASCII value: " << (int)c << endl;
}

void runCallback(char c, void (*callback)(char)) {
    callback(c);
}

int main() {
    runCallback('A', printAscii);
    return 0;
}
