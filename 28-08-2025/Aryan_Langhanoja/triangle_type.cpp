#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {

        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        if ((a + b) <= c || (b + c) <= a || (a + c) <= b)
        {
            return "none";
        }

        if (a == b && b == c)
        {
            return "equilateral";
        }

        if (a == b || b == c || a == c)
        {
            return "isosceles";
        }

        if (a != b && b != c && b != c)
        {
            return "scalene";
        }

        return "";
    }
};