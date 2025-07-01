#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool CheckCapacity(vector<int> &weights, int days, int capacity)
    {
        int curr_day = 0;
        int curr_weight = 0;
        int n = weights.size();
        bool isshipped = false;
        int i = 0;

        while (curr_day < days && i < n)
        {

            if ((curr_weight + weights[i]) <= capacity)
            {
                curr_weight += weights[i];
                i++;

                if (i == n)
                {
                    isshipped = true;
                }
            }

            else
            {
                curr_day++;
                curr_weight = 0;
            }
        }

        return isshipped;
    }
    // 47 / 88 passed
public:
    int shipWithinDays(vector<int> &weights, int days)
    {

        int ans = 0;
        if (days == 1)
        {
            for (int &i : weights)
            {
                ans += i;
            }

            return ans;
        }

        int left = 1;
        int right = 500;

        while (left <= right)
        {

            int mid = left + (right - left) / 2;
            if (CheckCapacity(weights, days, mid))
            {
                ans = mid;
                right = mid - 1;
            }

            else
            {
                left = mid + 1;
            }
        }

        return ans;
    }
};