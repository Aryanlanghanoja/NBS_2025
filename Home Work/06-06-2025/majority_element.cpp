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

    int majorityElement(vector<int>& nums) {
        int count = 1 ;
        int element = nums[0] ;

        for(int i : nums) {
            if(i == element) {
                count++;
            }

            else {
                count--;
            }

            if(count == 0) {
                element = i ;
                count = 1 ;
            }
        }

        return element;
    }
};

int main()
{
    Solution sol;

    cout << "Enter the Values for the array :- " << endl;
    vector<int> nums = sol.Input_Array();

    cout << "\nOriginal Input Array Is :- " << endl;
    sol.Print_Array(nums);

    int majority_element = sol.majorityElement(nums);

    cout << "\nThe Majority ELement in the Array Is :- " << majority_element << " .\n";

    return 0;
}