#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main() {

    int n[5];

    for (int i = 0; i < 5; ++i) {
        n[i] = i + 10;
    }

    cout << "Element" << setw(13) << "Value" << endl;
    for (int j = 0; j < 5; j++) {
        cout << setw( 7 ) << j << setw(13) << n[j] << endl;
    }

    return 0;
}