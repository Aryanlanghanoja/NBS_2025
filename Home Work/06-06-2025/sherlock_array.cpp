#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
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

    string balancedSums(vector<int> &arr) {
    
        int n = arr.size();
        vector<int> prefix(n , 0) ;
        vector<int> suffix(n , 0);
        
        prefix[0] = arr[0] ;
        
        for(int i = 1 ; i < n ; i++) {
            prefix[i] = prefix[i-1] + arr[i];
        }
        
        suffix[n-1] = arr[n-1];
        
        for(int i = n-2 ; i >= 0 ; i--) {
            suffix[i] = suffix[i+1] + arr[i];
        }
        
        for(int i = 0 ; i < n ; i++) {
            if(prefix[i] == suffix[i]) {
                return "YES" ;
            }
        }
        
        return "NO";
    }
};

int main()
{
    Solution sol;

    cout << "Enter the Values for the array :- " << endl;
    vector<int> nums = sol.Input_Array();

    cout << "\nOriginal Input Array Is :- " << endl;
    sol.Print_Array(nums);

    string ans = sol.balancedSums(nums);

    cout << "\nThe Index Exist Where Sum is balanced :- " << ans << " .\n";

    return 0;
}