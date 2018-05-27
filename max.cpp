#include <iostream>

using namespace std;

int max (int a, int b);

int main() {
    int result;
    result = max(1, 2);
    cout << result << endl;
}

int max (int a, int b) {
    return a + b;
}