#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        n--;

        vector<bool> prime(n + 1, true);

        for (int i = 2; i <= (n / i); i++)
        {
            if (prime[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    prime[j] = false;
                }
            }
        }

        int count = 0;

        for (int i = 2; i <= n; i++)
        {
            count += prime[i];
        }

        return count;
    }
};