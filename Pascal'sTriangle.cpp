#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n)
{
    // Write your code here.

    vector<vector<long long int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<long long int> level(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            level[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
        ans.push_back(level);
    }
    return ans;
}
