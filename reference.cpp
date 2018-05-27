#include <iostream>

using namespace std;

int main () {

    int i;
    double d;

    int& r = i;
    double& s = d;

    i = 5;
    d = 3.1415926;

    cout << "变量r的值：" << r << endl;
    cout << "变量s的值：" << s << endl;
}