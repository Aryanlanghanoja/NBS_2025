#include<bits/stdc++.h>
using namespace std;

class Solution {

    private:
    
        int isSpeedfine(vector<int>& piles , int speed) {
            unsigned int needed_h = 0 ;

            for(int &p : piles) {
                needed_h += (p / speed) ;
                if(p % speed != 0) {
                    needed_h++;
                }
            }

            return needed_h ;

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

        int minEatingSpeed(vector<int>& piles, int h) {
            int n = piles.size();
            int left = 1 ;
            int right = *max_element(piles.begin() , piles.end()) ;
            int speed = right;
    
            while(left < right) {
                int mid = left + (right - left) / 2 ;
                int needed_h = isSpeedfine(piles,mid);
    
                if(needed_h > h) {
                    left = mid + 1 ;
                }
    
                else {
                    speed = mid ;
                    right = mid ;
                }
            }
    
            return speed;
        }
    }; 

void Solve() {
    Solution solution ;

    vector<int> piles  = solution.Input_Array();
    int h = solution.Input_Integer("h");
    int output = solution.minEatingSpeed(piles , h);
    cout << output << endl ;
    
}

int main() {
    Solve();
   return 0;
}