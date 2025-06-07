#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int Input_Val() {
        int val;

        cout << "\nEnter the k :- ";
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
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long total = 0;

        for (int c : chalk) {
            total += c;
        }

        k %= total;

        for (int i = 0; i < n; ++i) {
            if (k < chalk[i]) {
                return i;
            }
            k -= chalk[i];
        }

        return -1;
    }
};

int main () {

    Solution sol;

    cout << "Enter the Values for Chalks :- " << endl;
    vector<int> chalks = sol.Input_Array();

    int k = sol.Input_Val();

    cout << "\nThe Original Array :- ";
    sol.Print_Array(chalks);

    int student = sol.chalkReplacer(chalks , k);

    cout << "\nThe Student That Will Replace the Chalk is " << student << " ." << endl;

    return 0;

}