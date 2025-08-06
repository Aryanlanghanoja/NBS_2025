#include <bits/stdc++.h>
using namespace std;

int RecursionHelper(vector<vector<int>> &arr, int idx, int task)
{
    if (idx < 0)
    {
        return 0;
    }

    if (task == 0)
    {
        return arr[idx][0] + max(RecursionHelper(arr, idx - 1, 1), RecursionHelper(arr, idx - 1, 2));
    }
    else if (task == 1)
    {
        return arr[idx][1] + max(RecursionHelper(arr, idx - 1, 0), RecursionHelper(arr, idx - 1, 2));
    }
    else
    {
        return arr[idx][2] + max(RecursionHelper(arr, idx - 1, 0), RecursionHelper(arr, idx - 1, 1));
    }

    return 0;
}

int Recursion(vector<vector<int>> &arr)
{
    int n = arr.size();
    int task_0 = RecursionHelper(arr, n - 1, 0);
    int task_1 = RecursionHelper(arr, n - 1, 1);
    int task_2 = RecursionHelper(arr, n - 1, 2);
    return max({task_0, task_1, task_2});
}

int MemoizationHelper(vector<vector<int>> &arr, int idx, int task, vector<vector<int>> &memo)
{
    if (idx < 0)
    {
        return 0;
    }

    if (memo[idx][task] != -1)
    {
        return memo[idx][task];
    }

    if (task == 0)
    {
        return (memo[idx][task] = arr[idx][0] + max(MemoizationHelper(arr, idx - 1, 1, memo), MemoizationHelper(arr, idx - 1, 2, memo)));
    }
    else if (task == 1)
    {
        return (memo[idx][task] = arr[idx][1] + max(MemoizationHelper(arr, idx - 1, 0, memo), MemoizationHelper(arr, idx - 1, 2, memo)));
    }
    else
    {
        return (memo[idx][task] = arr[idx][2] + max(MemoizationHelper(arr, idx - 1, 0, memo), MemoizationHelper(arr, idx - 1, 1, memo)));
    }

    return 0;
}

int Memoization(vector<vector<int>> &arr)
{
    int n = arr.size();
    vector<vector<int>> memo(n, vector<int>(3, -1));
    int task_0 = MemoizationHelper(arr, n - 1, 0, memo);
    int task_1 = MemoizationHelper(arr, n - 1, 1, memo);
    int task_2 = MemoizationHelper(arr, n - 1, 2, memo);

    return max({task_0, task_1, task_2});
}

int Tabulation(vector<vector<int>> &arr)
{
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(3, 0));
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = arr[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = arr[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = arr[i][2] + max(dp[i - 1][0], dp[i - 1][1]);
    }

    return max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
}

int Space_Optimization(vector<vector<int>> &arr)
{
    int n = arr.size();
    vector<int> prev(3, 0);
    prev[0] = arr[0][0];
    prev[1] = arr[0][1];
    prev[2] = arr[0][2];

    for (int i = 1; i < n; i++)
    {
        vector<int> curr(3, 0);
        curr[0] = arr[i][0] + max(prev[1], prev[2]);
        curr[1] = arr[i][1] + max(prev[0], prev[2]);
        curr[2] = arr[i][2] + max(prev[0], prev[1]);
        prev = curr;
    }

    return max({prev[0], prev[1], prev[2]});
}

void Solve()
{
    int n;
    vector<vector<int>> arr = {{1, 2, 5}, {3, 1, 1}, {3, 3, 3}};

    int recursive_ans = Recursion(arr);
    int memoization_ans = Memoization(arr);
    int tabulation_ans = Tabulation(arr);
    int space_optimization_ans = Space_Optimization(arr);

    cout << "Recursive Answer: " << recursive_ans << endl;
    cout << "Memoization Answer: " << memoization_ans << endl;
    cout << "Tabulation Answer: " << tabulation_ans << endl;
    cout << "Space Optimization Answer: " << space_optimization_ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solve();

    return 0;
}