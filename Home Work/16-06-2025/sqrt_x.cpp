#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

        int Input_Integer(string val) {
            int n;

            cout << "\nEnter the Integer Value for " << val << " :- " ;
            cin >> n;

            return n;
        }

        int mySqrt(int x) {
            if (x == 0 || x == 1) {
                return x;
            }
    
            int low = 1, high = x, ans = 0;
    
            while (low <= high) {
                int mid = low + (high - low) / 2;
    
                long long square = (long long)mid * mid;
    
                if (square == x) {
                    return mid;
                }
                
                else if (square < x) {
                    ans = mid;
                    low = mid + 1;
                }
    
                else {
                    high = mid - 1;
                }
            }
    
            return ans;
        }
    }; 

void Solve() {
    Solution solution ;

    int n = solution.Input_Integer("n");
    int output = solution.mySqrt(n);
    cout << output << endl ;
    
}

int main() {
    Solve();
   return 0;
}