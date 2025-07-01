#include <bits/stdc++.h>
using namespace std;

// 29 / 116 passed.
class Solution
{
public:
    int countGoodNumbers(long long n)
    {
        unsigned long long int odd = (n / 2) + (n % 2);
        unsigned long long int even = (n / 2);
        unsigned int modulo = 1e9 + 7;
        unsigned long long int ans = 1;

        for (int i = 1; i <= even; i++)
        {
            ans *= 4;
        }

        for (int i = 1; i <= odd; i++)
        {
            ans *= 5;
        }

        ans = ans % (modulo);

        return ans;
    }
};