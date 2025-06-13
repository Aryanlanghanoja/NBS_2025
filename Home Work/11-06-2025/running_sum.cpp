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

        vector<int> runningSum(vector<int>& nums) {
            int n = nums.size() ;
    
            for(int i = 1 ; i < n ; i++) {
                nums[i] += nums[i-1];
            }
    
            return nums;
        }
    };

int main() {

    Solution solution;

    cout << "Enter the Values for the array :- " << endl;
    vector<int> nums = solution.Input_Array();

    cout << "\nThe Original Array Is :- " << endl;
    solution.Print_Array(nums);

    vector<int> ans = solution.runningSum(nums);

    cout << "\nThe Running Sum of The Array Is :- " << endl;
    solution.Print_Array(ans);

    return 0;
}