#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    int Insert_Position(vector<int> &arr, int target, bool search)
    {
        int left = 0;
        int right = arr.size() - 1;
        int idx = -1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (target < arr[mid])
            {
                right = mid - 1;
            }

            else if (target > arr[mid])
            {
                left = mid + 1;
            }

            else
            {
                idx = mid;

                if (search)
                {
                    right = mid - 1;
                }

                else
                {
                    left = mid + 1;
                }
            }
        }

        return idx;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans(2, 0);
        ans[0] = Insert_Position(nums, target, true);
        ans[1] = Insert_Position(nums, target, false);

        return ans;
    }
};