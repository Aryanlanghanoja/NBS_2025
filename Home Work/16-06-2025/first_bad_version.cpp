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

        void  Print_Array(vector<int> &Array) {
            for (int i = 0; i < Array.size() ; i++) {
                cout << Array[i] << " ";
            }
            cout << endl;
        }
    
        vector<int> Input_Array() {
            vector<int> Array;
    
            cout << "Enter -1 to Stop." << endl;
            int input;
    
            while (true) {
                cin >> input;
                if (input == -1)
                    break;
                Array.push_back(input);
            }
    
            return Array;
        }    

        int firstBadVersion(int n) {
            if(n == 1) {
                return 1 ;
            }
    
            if(n == 2) {
                if(isBadVersion(1)) {
                    return 1 ;
                }
    
                else {
                    return 2 ;
                }
            }
    
            int low = 1 ;
            int high = n ;
    
            while(low < high) {
                int mid = low + (high - low) / 2 ;
                bool mid_check = isBadVersion(mid);
    
                if(mid_check) {
                    high = mid ;
                }
    
                else {
                    low = mid + 1 ;
                }
            }
    
            return low;
        }
    }; 

void Solve() {
    Solution solution ;

    int n = solution.Input_Integer("n");
    int output = solution.firstBadVersion(n);
    cout << output << endl ;
    
}

int main() {
    Solve();
   return 0;
}