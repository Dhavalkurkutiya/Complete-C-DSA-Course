#include <iostream>
using namespace std;

int main()
{
    int number = 45;

    if (number >= 0)
    {
        cout << "The number is positive" << endl;
    }
    else
    {
        cout << "The number is negative" << endl;
    }

    cout << "Enter your age: ";

    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult" << endl;
    }
    else
    {
        cout << "You are a minor" << endl;
    }

    cout << "Enter a number: ";
    int number;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }

    return 0;
}