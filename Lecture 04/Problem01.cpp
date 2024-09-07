#include <iostream>
using namespace std;

int main()
{
    // 1. Square of a pattern
    int n = 4, m = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 2. Square of a pattern (ABCD)

    int value = 4;
    for (int i = 0; i < value; i++)
    {
        char ch = 'A';
        for (int j = 0; j < value; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // 3. Number Pattern
    int num = 3;
    int count = 1;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    //4. Home-Work
    int h = 3;
    char ch2 = 'A';
    for (int  i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cout << ch2 << " ";
            ch2++;
        }
        cout << endl;
        
    }

    return 0;
}