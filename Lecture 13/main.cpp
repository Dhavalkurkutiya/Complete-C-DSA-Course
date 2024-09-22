#include <iostream>
#include <vector>
using namespace std;

double power(double x, int n)
{

    long binFrom = n;
    if (n < 0)
    {
        x = 1 / x;
        binFrom = -binFrom;
    }

    double ans = 1;
    while (binFrom > 0)
    {
        {
            if (binFrom % 2 == 1)
            {
                ans = ans * x;
            }
            x = x * x;
            binFrom = binFrom / 2;
        }
        return ans;
    }
}

int main()
{
    // ansComupte x^n (Binary Exponentiation)
    double x = 10;
    int n = 10;
    cout << power(x, n) << endl;
    return 0;
}