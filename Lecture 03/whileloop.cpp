#include <iostream>
using namespace std;

int main() {
    int count = 1;
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;
    while (count <= n)
    {
         cout<<count<<" ";
        count = count + 1;
        // count+=1
        // count++;
    }
    
    return 0;
}