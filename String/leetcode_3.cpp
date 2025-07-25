#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> charIndex(256, -1);
        int maxLength = 0, start = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (charIndex[s[i]] >= start)
            {
                start = charIndex[s[i]] + 1;
            }
            charIndex[s[i]] = i;
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};

int main()
{
    Solution sol;
    string input = "bbbbb";
    int result = sol.lengthOfLongestSubstring(input);
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    return 0;
}