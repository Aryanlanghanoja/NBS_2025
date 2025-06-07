#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool armstrongNumber(int n) {
          float sum = 0;
          float copy = n;
          int power = n == 0 ? 1 : log10(n) + 1;

          while(n) {
              int digit = n % 10;
              sum += pow(digit, power);
              n /= 10;
          }
          
          return copy == sum;
      }
};

int main() {
    Solution obj;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(obj.armstrongNumber(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
