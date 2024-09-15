#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Single Number
    // Given a non-empty array of integers, every element appears twice except for one. Find that single one.

    // Bitwise XOR
    //  0 ^ 0 = 0
    //  0 ^ 1 = 1
    //  1 ^ 0 = 1
    //  1 ^ 1 = 0

    // n ^ n = 0
    // n ^ 0 = n

    // Problem solved using XOR operator
    int arr[] = {4, 1, 1};
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        ans ^= arr[i];
    }
    cout << ans << endl;

    // Using vector
    vector<int> v = {4, 1, 2, 1, 2};
    int res = 0;
    for (int i : v)
    {
        res ^= i;
    }
    cout << res << endl;

    return 0;
}