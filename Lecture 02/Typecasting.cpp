#include <iostream>
using namespace std;

int main() {
    
   //Type Casting
   //Type casting is a way to convert a variable from one data type to another data type.

    //Implicit Type Casting
    char ch = 'a';
    int num = ch;
    cout << "Character: " << ch << endl;

    //Explicit Type Casting
    double stock = 199.99;
    int newStock = (int)stock;
    cout << "Price: " << newStock << endl;

    return 0;
}