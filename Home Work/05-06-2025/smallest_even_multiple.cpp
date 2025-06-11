#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int Input_n() {
        int n;

        cout << "\nEnter the n :- ";
        cin >> n;

        return n;
    }
    int gcd(int a, int b) { 

        if(b == 0) {
            return a;
        }
         
        return gcd(b, a % b);
    }

    int smallestEvenMultiple(int n) {
        return (n * 2) / gcd(n, 2);
    }
};

int main() {

    Solution sol;

    int n = sol.Input_n();
    int multiple = sol.smallestEvenMultiple(n);

    cout << "\nThe Smallest Even Multiple of " << n << " Is " << multiple << endl;

    return 0;
}