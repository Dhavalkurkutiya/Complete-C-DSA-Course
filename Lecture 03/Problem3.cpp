#include <iostream>
using namespace std;

int main()
{
    // Sum of all odd numbers from 1 to n

    int n = 1000;
    for (int i = 0; i < n; i++)
    {
        if(i%2!=0){
            cout<<i<<" ";
        }
    }

    return 0;
}