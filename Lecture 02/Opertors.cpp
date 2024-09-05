#include <iostream>
using namespace std;

int main()
{

    // Operators in C++
    // 1. Arithmetic
    int a = 5;
    int b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    cout << (5 / (double)2) << endl;

    // 2. Relational
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;

    // 3. Logical
    cout << "a && b = " << (a && b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "!a = " << !a << endl;

    // Unary Operators
    cout << "a++ = " << a++ << endl;
    cout << "a = " << a << endl;
    cout << "++a = " << ++a << endl;
    cout << "a = " << a << endl;

    return 0;
}