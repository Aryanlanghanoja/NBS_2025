#include <bits/stdc++.h>
using namespace std;

int Catalan_recursive(int n)
{
    if (n < 2)
    {
        return 1;
    }

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res += Catalan_recursive(i) * Catalan_recursive(n - i - 1);
    }

    return res;
}

int Catalan_Memoization(int n, vector<int> &dp)
{
    if (n < 2)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res += Catalan_Memoization(i, dp) * Catalan_Memoization(n - i - 1, dp);
    }

    return (dp[n] = res);
}

int Catalan_Tabulation(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }

    return dp[n];
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int freq = 1e4;
    int t = freq;

    // cout << "Catalan number (recursive): " << Catalan_recursive(n) << endl;

    // vector<int> dp(n + 1, -1);
    // cout << "Catalan number (memoization): " << Catalan_Memoization(n, dp) << endl;

    // calcualte the time in nanaoseconds
    auto start = chrono::high_resolution_clock::now();

    while (freq--)
    {
        int ans = Catalan_Tabulation(n);
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    cout << "Time taken: " << duration / t << " nanoseconds" << endl;

    return 0;
}