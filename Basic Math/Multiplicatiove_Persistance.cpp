#include<bits/stdc++.h>
using namespace std;

int digit(int n) {
    int digit = 0;

    if(n < 10) {
        return 1;
    }

    int count = 0; 

    while(n) {
        count++;
        n /= 10;
    }
}

int calc_mul(int n) {
    int ans = 1;

    while(n) {
        ans *= n;
        n /= 10;
    }

    return ans;
}

int helper(int n) {
    int num_digit = digit(n);
    int mul = calc_mul(n);
    int steps = 1;

    while(num_digit != 1 ) {
        int mul = calc_mul(n);
        n = mul;
        num_digit = digit(n);
        steps++;
    }

    return steps;
}

int main() {

    int n;
    cin >> n;

    int ans = helper(n);
    cout << ans << endl;

    return 0;
}