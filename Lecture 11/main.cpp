//Time complexity: O(n^2)

#include <iostream>
#include <vector>
using namespace std;


vector<int> pairSum(vector<int> v, int target)
{
    vector<int> res;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int target = 7;

    vector<int> res = pairSum(v, target);
    cout << "Pair found at index " << res[0] << " and " << res[1] << endl;

    return 0;
}