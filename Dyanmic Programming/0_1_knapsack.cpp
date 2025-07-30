#include <bits/stdc++.h>
using namespace std;

int Recursive_Helper(vector<int> &weights, vector<int> &values, int W, int n)
{
    if (n == 0 || W == 0) {
        return 0;
    }

    if (weights[n - 1] > W) {
        return Recursive_Helper(weights, values, W, n - 1);
    } else {
        return max(Recursive_Helper(weights, values, W, n - 1),
                   values[n - 1] + Recursive_Helper(weights, values, W - weights[n - 1], n - 1));
    }
    
    return 0;
}

int Recursive_0_1_Knapscak(vector<int> &weights, vector<int> &values, int W)
{
    int n = weights.size();

    return Recursive_Helper(weights, values, W, n);
}

int Memo_Helper(vector<int> &weights, vector<int> &values, int W, int n , vector<vector<int>> &memo)
{
    if (n == 0 || W == 0) {
        return 0;
    }

    if (memo[n - 1][W] != 0) {
        return memo[n - 1][W];
    }

    if (weights[n - 1] > W) {
        return memo[n-1][W] = Memo_Helper(weights, values, W, n - 1 , memo);
    } else {
        return (memo[n-1][W] = max(Memo_Helper(weights, values, W, n - 1 , memo),
                   values[n - 1] + Memo_Helper(weights, values, W - weights[n - 1], n - 1 , memo)));
    }
    
    return 0;
}

int Memoization_0_1_Knapscak(vector<int> &weights, vector<int> &values, int W)
{
    int n = weights.size();
    vector<vector<int>> memo(n, vector<int>(W + 1, 0));

    for(int i = weights[0]; i <= W; i++) {
        memo[0][i] =  values[0];
    }

    return Memo_Helper(weights, values, W, n, memo);
}

int Tabulation_0_1_Knapscak(vector<int> &weights, vector<int> &values, int W)
{
    return 0;
}

int Space_Optimization_0_1_Knapscak(vector<int> &weights, vector<int> &values, int W)
{
    return 0;
}

int main()
{
    return 0;
}