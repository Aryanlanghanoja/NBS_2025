#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int copy = n;
        int reverse = 0;

        while (n) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }

        return copy == reverse;
    }
};

int main() {
    Solution sol;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
