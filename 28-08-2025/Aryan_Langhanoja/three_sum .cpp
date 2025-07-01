#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];

                    if (sum == 0)
                    {
                        ans.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }

        return ans;
    }
};