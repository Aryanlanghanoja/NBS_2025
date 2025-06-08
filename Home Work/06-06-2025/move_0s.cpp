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

    void moveZeroes(vector<int>& nums) {

        unsigned short i = 0 ;
        unsigned short j = 0 ;
        unsigned short n = nums.size() ;

        while(j < n) {
            if(nums[i] == 0 && nums[j] != 0 && i < j) {
                swap(nums[i] , nums[j]);
                i++;
            }

            else if (nums[i] != 0) {
                i++;
            }

            j++;
        }

        return ;
        
    }
};

int main()
{
    Solution sol;

    cout << "Enter the Values for the array :- " << endl;
    vector<int> nums = sol.Input_Array();

    cout << "\nOriginal Input Array Is :- " << endl;
    sol.Print_Array(nums);

    sol.moveZeroes(nums);

    cout << "\nThe Moving all the zeros to the end the Array Is :- " << endl;
    sol.Print_Array(nums);

    return 0;
}