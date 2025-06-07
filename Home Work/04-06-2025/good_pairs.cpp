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

    int numIdenticalPairs(vector<int>& nums) {
        vector<int> counter(101 , 0);
        int n = nums.size();
        int sum = 0;

        for(int i = 0 ; i < n ; i++) {
            sum += counter[nums[i]];
            counter[nums[i]]++;
        }

        return sum;
    }
};

int main() {
    Solution sol;

    vector<int> nums = sol.Input_Array();

    cout << "\nOriginal Input Array :- " << endl;
    sol.Print_Array(nums);

    int result = sol.numIdenticalPairs(nums);
    cout << "\nNumber of good pairs: " << result << endl;

    return 0;
}
