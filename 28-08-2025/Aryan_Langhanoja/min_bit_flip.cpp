#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int n = 0;

        for (int i = 0; i < 32; i++)
        {
            if ((start & 1) ^ (goal & 1))
            {
                n++;
            }

            start >>= 1;
            goal >>= 1;
        }

        return n;
    }
};