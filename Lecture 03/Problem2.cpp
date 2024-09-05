#include <iostream>
using namespace std;

int main()
{
    //  Sum of first n natural numbers

    int sum = 0;
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum : " << sum << endl;

    return 0;
}