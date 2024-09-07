#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int changeX(int x)
{
    x = 20;
    return x;
}
int main()
{
    //Pass by value
    int x = 10, y = 20;
    int val = 5;

    cout << changeX(val) << endl;
    
    // cout << sum(x, y) << endl;
    return 0;
}