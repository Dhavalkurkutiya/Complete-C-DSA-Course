#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0, bestBuy = prices[0], bestSell = 0;
    int size = sizeof(prices) / sizeof(prices[0]);

    for (int i = 0; i < size; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    cout << maxProfit << endl;
    return 0;
}