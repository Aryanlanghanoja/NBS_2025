#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        if (nums.size() == 1)
        {
            return nums[0];
        }

        int maxSum = INT_MIN;
        int currSum = 0;

        for (int &i : nums)
        {
            currSum += i;
            maxSum = max(maxSum, currSum);

            if (currSum < 0)
            {
                currSum = 0;
            }
        }

        return maxSum;
    }
};