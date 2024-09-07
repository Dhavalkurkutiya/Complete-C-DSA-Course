#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;

        digSum += lastDigit;
    }
    return digSum;
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n = 8, r = 2;
    cout << nCr(n, r) << endl;
    
    // cout << sumOfDigits(123) << endl;

    return 0;
}