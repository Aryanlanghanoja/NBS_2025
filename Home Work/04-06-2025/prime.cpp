#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if(n < 2) {
            return false;
        }

        if(n < 4) {
            return true;
        }

        if(n % 2 == 0 || n % 3 == 0) {
            return false;
        }

        for(int i = 5 ; i <= (n / i); i += 6) {
            if(n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution obj;
    int number;

    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    if (obj.isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
