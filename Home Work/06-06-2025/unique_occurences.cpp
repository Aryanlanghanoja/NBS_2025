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

    bool uniqueOccurrences(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int , int> occurrences ;
        unordered_set<int> unique_occurrences ;

        for(int i = 0 ; i < n ; i++) {
            occurrences[nums[i]]++;
        }

        for(const pair<int , int> &occurrence : occurrences) {
            if(unique_occurrences.find(occurrence.second) != unique_occurrences.end()) {
                return false ;
            }

            unique_occurrences.insert(occurrence.second);
        }

        return true;
    }
};

int main()
{
    Solution sol;

    cout << "Enter the Values for the array :- " << endl;
    vector<int> nums = sol.Input_Array();

    cout << "\nOriginal Input Array Is :- " << endl;
    sol.Print_Array(nums);

    bool unique_occurrence = sol.uniqueOccurrences(nums);

    cout << "\nThe Majority ELement in the Array Is :- " << unique_occurrence << " .\n";

    return 0;
}