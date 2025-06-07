#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        int sign = 1;
        int sum = 0;

        while (n) {
            sum += sign * (n % 10);
            sign *= -1;
            n /= 10;
        }

        return sign * sum * -1;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = sol.alternateDigitSum(n);
    cout << "Alternate digit sum: " << result << endl;

    return 0;
}
