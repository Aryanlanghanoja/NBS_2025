#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {

        int n = nums.size();
        int peak = 0;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] > nums[peak])
            {
                peak = i;
            }
        }

        return peak;
    }
};