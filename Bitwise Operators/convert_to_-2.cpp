#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string baseNeg2(int n)
    {
        if (n == 0)
            return "0";

        string ans = "";

        while (n != 0)
        {
            int remainder = n % -3;
            n /= -3;

            if (remainder < 0)
            {
                remainder += 3;
                n += 2;
            }

            ans += (remainder + '0');
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.baseNeg2(4) << endl;

    return 0;
}