#include <iostream>
using namespace std;

int main()
{

    // a - 97 [97, 122] - Lowercase
    // b - 98

    // A - 65 [65, 90] - Uppercase
    // B - 66 

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "You entered an uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "You entered a lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "You entered a digit." << endl;
    }
    else
    {
        cout << "You entered a special character." << endl;
    }

    return 0;
}