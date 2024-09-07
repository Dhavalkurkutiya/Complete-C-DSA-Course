#include <iostream>
using namespace std;

int main() {
    int n =8;
    for (int i = 0; i < n; i++)
    {
        //Spaces : n-i-1
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
    
        //Numbers1
        for (int j = 0; j <= i+1; j++)
        {
            cout<<j;
        }
        
        //Numbers2
        for (int j = 0; j > 0 ; j--)
        {
            cout<<j;
        }
        cout << endl;
    }
    
    return 0;
}