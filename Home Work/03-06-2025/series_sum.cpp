#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int seriesSum(int n) {
        return n * (n + 1) / 2;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = sol.seriesSum(n);
    cout << "Sum of first " << n << " natural numbers is: " << result << endl;

    return 0;
}
