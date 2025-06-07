#include <bits/stdc++.h>
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

    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums = sol.Input_Array();

    cout << "\nOriginal Input Array :- " << endl;
    sol.Print_Array(nums);

    vector<int> result = sol.getConcatenation(nums);

    cout << "\nConcatenated Array:- " << endl;
    sol.Print_Array(result);

    return 0;
}
