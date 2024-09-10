#include <iostream>
using namespace std;
int PI = 3.14;

int main()
{
    int a = 4, b = 8;

    cout << (a | b) << endl;
    cout << (a & b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;
    cout << (4 << 1) << endl; // left shift
    cout << (4 >> 1) << endl; // right shift

    cout << PI << endl;

    // DATA TYPES MODIFIERS
    //  long - 4 bytes - 32 bits
    //  short - 2 bytes - 16 bits
    //  signed - 1 bit
    //  long long - 8 bytes - 64 bits
    //  unsigned - 1 bit

    cout << "=======================" << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;

    unsigned int x = 12; // 0000 0000 0000 0000 0000 0000 0000 1100 
    cout << x << endl;

    return 0;
}