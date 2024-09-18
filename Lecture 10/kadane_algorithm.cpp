#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = 0;
    int currSum = 0;

    // Kadane's Algorithm
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        } 
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum << endl;

    return 0;
}