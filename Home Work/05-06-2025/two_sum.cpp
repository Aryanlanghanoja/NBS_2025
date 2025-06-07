#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int Input_Target() {
        int target;

        cout << "\nEnter the Target :- ";
        cin >> target;

        return target;
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
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> numsWithIndex;

        for (int i = 0; i < nums.size(); i++) {
            numsWithIndex.push_back({nums[i], i});
        }

        sort(numsWithIndex.begin(), numsWithIndex.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {

            int sum = numsWithIndex[left].first + numsWithIndex[right].first;

            if (sum == target) {
                return {numsWithIndex[left].second, numsWithIndex[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {};
    }
};

int main() {

    Solution sol;

    cout << "\nEnter the Values for the  Array :- " << endl;
    vector<int> nums = sol.Input_Array();

    int target = sol.Input_Target();

    cout << "\nThe Original Input Array :- " << endl;
    sol.Print_Array(nums);

    vector<int> answer = sol.twoSum(nums, target);

    cout << "\nThe Output is :- " << endl;
    sol.Print_Array(answer);

    return 0;

}