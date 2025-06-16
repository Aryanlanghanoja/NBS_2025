#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int key) {
            int n = matrix.size();
            if (n == 0) return false;
    
            int m = matrix[0].size();
            int low = 0;
            int high = n * m - 1;
    
            while(low <= high) {
                int mid = low + (high - low) / 2;
                int row = mid / m;
                int col = mid % m;
    
                if(matrix[row][col] == key) {
                    return true;
                }
                else if(matrix[row][col] < key) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
    
            return false;
        }
    };    

int main() {

   return 0;
}