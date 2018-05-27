#include <iostream>
#include <cstring>
using namespace std;

#include <iomanip>
using std::setw;

int main() {

    string str1 = "Hello", str2 = "World", str3;
    str3 = str1 + str2;
    //str4 = strcat(str1, str2);
    char str4[] = {'a', 'b', 'c'};

    cout << str3 << setw(10) << str3.size() << endl;
    cout << str4 << setw(10) << strlen(str4) << endl;

    return 0;
}