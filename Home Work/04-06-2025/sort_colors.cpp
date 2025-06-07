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
    
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0 ;
        int j = 0 ;
        int k = n - 1;

        while(j <= k) {
            if(nums[j] == 1){
                j++;
            } else if(nums[j] == 2) {
                swap(nums[j] , nums[k]);
                k--;
            } else {
                swap(nums[i] , nums[j]);
                i++;
                j++;
            }
        }
    }
};

int main() {

    Solution sol;

    cout << "Enter the Values of Colors (0- Red 1-White 2-Blue) :-" << endl;
    vector<int> colors = sol.Input_Array();

    cout << "\nOriginal Input Array :- " << endl;
    sol.Print_Array(colors);

    sol.sortColors(colors);

    cout << "\nThe Sorted Colors are :-" << endl;
    sol.Print_Array(colors);

    return 0;
}