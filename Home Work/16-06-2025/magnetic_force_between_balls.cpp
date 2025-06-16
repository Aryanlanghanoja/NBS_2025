#include<bits/stdc++.h>
using namespace std;

class Solution {

    private :

        bool canPlace(vector<int>& position, int m , int force) {
            int n = position.size();
            int countBalls = 1 ;
            int prevPosition = position[0];

            for(int i = 1 ; i < n ; i++) {
                int currPosition = position[i] ;

                if((currPosition - prevPosition) >= force) {
                    countBalls++;
                    prevPosition = currPosition ;
                }
                
                if(countBalls == m) {
                    return true;
                }
            }

            return false ;
        }

    public:

        int Input_Integer(string val) {
            int n;

            cout << "\nEnter the Integer Value for " << val << " :- " ;
            cin >> n;

            return n;
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

        int maxDistance(vector<int>& position, int m) {
            sort(position.begin() , position.end());
            int low = 1 ;
            int high = position.back() - position.front();
            int max_force = 0 ;
    
            while(low <= high) {
    
                int mid = low + (high - low) / 2 ;
                
                if(canPlace(position , m , mid)) {
                    max_force = mid ;
                    low = mid  +  1 ;
                }
    
                else {
                    high = mid-1 ;
                }
            }
    
            return max_force ;
        }
    }; 

void Solve() {
    Solution solution ;

    vector<int> position   = solution.Input_Array();
    int m = solution.Input_Integer("m");
    int output = solution.maxDistance(position , m);
    cout << output << endl ;
    
}

int main() {
    Solve();
   return 0;
}