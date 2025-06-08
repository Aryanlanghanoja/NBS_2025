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
    
        int n = arr.size() ;
        int i = 0 ;
        int j = n - 1 ;
        int left_sum = arr[i] ;
        int right_sum = arr[j] ;
        
        while(i <= j) {
            
            if(left_sum == right_sum && i == j) {
                return "YES" ;
            }
            
            else if(left_sum < right_sum) {
                i++;
                left_sum += arr[i] ;
            }
            
            else {
                j--;
                right_sum += arr[j] ;
            }
        } 
        
        return "NO" ;
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