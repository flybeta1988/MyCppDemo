#include <iostream>

using namespace std;

//变量声明向编译器保证变量以给定的类型和名称存在，
//这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。
//变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。
extern int a, b;

int main() {
    int a;
}