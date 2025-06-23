#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int diff = abs((int)a.size() - (int)b.size());

        if (diff >= 1)
        {
            if (a.size() > b.size())
            {
                for (int i = 0; i < diff; i++)
                {
                    b = '0' + b;
                }
            }

            else
            {
                for (int i = 0; i < diff; i++)
                {
                    a = '0' + a;
                }
            }
        }

        string sum = "";
        int carry = 0;
        int size = a.size();

        for (int i = size - 1; i >= 0; i--)
        {

            int x = a[i] - '0';
            int y = b[i] - '0';
            int add = x + y + carry;

            if (add == 0)
            {
                sum += '0';
                carry = 0;
            }

            else if (add == 1)
            {
                sum += '1';
                carry = 0;
            }

            else if (add == 2)
            {
                sum += '0';
                carry = 1;
            }

            else
            {
                sum += '1';
                carry = 1;
            }
        }

        if (carry)
        {
            sum += '1';
        }

        reverse(sum.begin(), sum.end());

        return sum;
    }
};

int main()
{
    Solution sol;

    string a = "11";
    string b = "1";
    string sum = sol.addBinary(a, b);

    cout << sum << endl;
    return 0;
}