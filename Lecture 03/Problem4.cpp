#include <iostream>
using namespace std;

int main()
{
    // Check if a number is prime or not
    //  Prime number is a number that is greater than 1 and divided by 1 or itself only.

    int n = 11;
    bool isPrime = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;
}