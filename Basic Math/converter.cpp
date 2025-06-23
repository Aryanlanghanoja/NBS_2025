#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    string decimal_to_binary(int n)
    {
        string ans = "";

        while (n)
        {
            ans += ((n % 2) + '0');
            n /= 2;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }

    string binary_to_decimal(int n)
    {
        int power = 0;
        int decimal = 0;

        while (n)
        {
            if (n % 10 == 1)
            {
                decimal += pow(2, power);
            }

            n /= 10;
            power++;
        }

        return to_string(decimal);
    }

    string decimal_to_hexadecimal(int n)
    {
        string ans = "";

        while (n > 0)
        {
            int rem = n % 10;
            if (rem < 10)
            {
                ans += (rem + '0');
            }

            else
            {
                ans += (rem - 10 + 'A');
            }

            n /= 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }

    string hexadecimal_to_decimal(string str)
    {
        int decimal = 0;
        int power = str.size() - 1;

        unordered_map<char, int> symbol = {
            {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}};

        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            int val;

            if (isdigit(ch))
            {
                val = ch - '0';
            }
            else
            {
                val = symbol[ch];
            }

            decimal += val * pow(16, power);
            power--;
        }

        return to_string(decimal);
    }

public:
    vector<string> convert(int a, int b, int c, string d)
    {
        // code here

        vector<string> answer;
        answer.push_back(decimal_to_binary(a));
        answer.push_back(binary_to_decimal(b));
        answer.push_back(decimal_to_hexadecimal(c));
        answer.push_back(hexadecimal_to_decimal(d));

        return answer;
    }
};

int main()
{
    Solution sol;

    vector<string> ans = sol.convert(6, 110, 6, "2A");
    cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << endl;

    return 0;
}