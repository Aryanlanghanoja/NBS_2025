#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int Input_Val() {
        int val;

        cout << "\nEnter the Value :- ";
        cin >> val;

        return val;
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

    int removeElement(vector<int>& nums, int val) {
        int j = 0 ;

        for(int i= 0 ; i< nums.size() ; i++) {
            if(nums[i] != val) {
                nums[j] = nums[i];
                j++ ; 
            }
        }

        return j ;
    }
};

int main () {

    Solution sol;

    cout << "Enter the Values for Array :- " << endl;
    vector<int> Array = sol.Input_Array();

    int val = sol.Input_Val();

    cout << "\nThe Original Array :- ";
    sol.Print_Array(Array);

    int k = sol.removeElement(Array , val);

    vector<int> new_nums(Array.begin(), Array.begin() + k);
    sort(new_nums.begin(), new_nums.end());

    cout << "\nArray After Removal of the " << val << " :- " << endl;
    sol.Print_Array(new_nums);

}