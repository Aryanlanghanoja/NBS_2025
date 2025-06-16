#include<bits/stdc++.h>
using namespace std;

class Solution {

    public:

        char Input_Character(string val) {
            char n;

            cout << "\nEnter the Character Value for " << val << " :- " ;
            cin >> n;

            return n;
        }

        void  Print_Array(vector<int> &Array) {
            for (int i = 0; i < Array.size() ; i++) {
                cout << Array[i] << " ";
            }
            cout << endl;
        }

        vector<char> Input_Array() {
            vector<char> Array;

            cout << "Enter # to Stop." << endl;
            char input;

            while (true) {
                cin >> input;
                if (input == '#')
                    break;
                Array.push_back(input);
            }

            return Array;

        }

        char nextGreatestLetter(vector<char>& letters, char target) {
    
            int n = letters.size();
            int low = 0 ;
            int high = n - 1 ;
            int position = -1 ;
    
            while(low <= high) {
    
                int mid = low + (high - low) / 2 ;
    
                if(letters[mid] > target) {
                    position = mid ;
                    high = mid - 1 ;
                }
    
                else {
                    low = mid + 1 ;
                }
            }
    
            if(position == -1) {
                return letters[0] ;
            }
    
            else {
                return letters[position];
            }
        }
    }; 

void Solve() {
    Solution solution ;

    vector<char> letters = solution.Input_Array();
    char target = solution.Input_Character("Target");
    char output = solution.nextGreatestLetter(letters , target);
    cout << output << endl ;

}

int main() {
    Solve();
   return 0;
}