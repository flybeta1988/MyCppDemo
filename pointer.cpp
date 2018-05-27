#include <iostream>

using namespace std;

int main () {

    int a = 20;
    int *p = &a;

    cout << "变量a的值：" << a << endl;
    cout << "指针变量中存储的地址：" << p << endl;
    cout << "指针中地址的值：" << *p << endl;
}