#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int n = s.length();
        int ans = 0;
        bool isNeg = false;

        for (int i = 0; i < n; i++)
        {

            if (s[i] == '-')
            {
                isNeg = true;
            }

            if (isalpha(s[i]))
            {
                if (isNeg)
                {
                    return -1 * ans;
                }

                else
                {
                    return ans;
                }
            }

            if (!isdigit(s[i]))
            {
                continue;
            }

            int digit = s[i] - '0';

            if ((ans * 10 + digit) < INT_MAX)
            {
                ans = ans * 10 + digit;
            }

            else
            {
                if (isNeg && (-1 * (ans * 10 + digit)) < INT_MIN)
                {
                    return INT_MIN;
                }

                else
                {
                    return INT_MAX;
                }
            }
        }

        if (isNeg)
        {
            return -1 * ans;
        }

        else
        {
            return ans;
        }
    }
};