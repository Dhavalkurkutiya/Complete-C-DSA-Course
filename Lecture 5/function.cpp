#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

// min of 2 numbers
int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
// sum of first n natural numbers
void sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

// Calculate the factorial of a number
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int val = sum(5, 4);
    cout << val << endl;
    cout << minimum(5, 4) << endl;
    sumN(5);
    cout << factorial(5) << endl;

    cout << "Hello world";
    return 0;
}