#include <iostream>
using namespace std;

int decToBin(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int binToDec(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        binNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main()
{
    int dec = 5;
    for (int i = 1; i <= 10; i++)
    {
        cout << decToBin(i) << endl;
    }

    int bin = 1110;
    cout << binToDec(bin) << endl;
    return 0;
}