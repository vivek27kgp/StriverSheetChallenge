#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // Write your code here.
    int n = prices.size();
    if (n == 1)
        return 0;
    int maxPro = 0;
    int minP = prices[0], diff = 0;

    for (int i = 0; i < n; i++)
    {
        diff = prices[i] - minP;

        maxPro = max(maxPro, diff);
        minP = min(minP, prices[i]);
    }
    return maxPro;
}