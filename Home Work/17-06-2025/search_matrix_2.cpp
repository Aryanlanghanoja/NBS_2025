#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int rows = matrix.size();
            int cols = matrix[0].size() ;
            int i = rows - 1 ;
            int j = 0 ;
    
            while(i >= 0 && j < cols) {
                int curr_element = matrix[i][j] ;
    
                if(curr_element == target) {
                    return true;
                }
    
                else if(target > curr_element) {
                    j++;
                }
    
                else {
                    i--;
                }
            }
    
            return false ;
        }
    };

int main() {

   return 0;
}