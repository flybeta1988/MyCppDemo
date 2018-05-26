#include <iostream>
#include <string>

using namespace std;

#define DB_NAME 'x'
#define DB_PASSWORD '123456'
#define NEW_LINE '\n'

int main() {

    //C风格字符串
    char str1[] = "Hello World !";

    //C++风格字符串
    string str2 = "Hello C++ !";

    cout << DB_NAME;
    cout << NEW_LINE;

    cout << str1;
    cout << NEW_LINE;

    cout << str2;
    cout << NEW_LINE;
}