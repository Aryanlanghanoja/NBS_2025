#include <bits/stdc++.h>
using namespace std;

int K_th_largest(vector<int> &nums, int k)
{
    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int &i : nums)
    {
        pq.push(i);

        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    return pq.top();
}

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 3;

    cout << k << "-th largest element is " << K_th_largest(nums, k) << endl;

    return 0;
}