#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDigits(int n) {
        int reverse = 0;
        while (n) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        return reverse;
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int reversed = sol.reverseDigits(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
