#include<bits/stdc++.h>
using namespace std;

class Solution {

    private:
    
        int GCD(int a , int b) {
            if(b == 0) {
                return a ;
            }
    
            else {
                return GCD(b , a % b) ;
            }
        }
        
    public:
    
        int findGCD(vector<int>& nums) {
            int n = nums.size() ;
            int max = nums[0] ;
            int min = nums[0] ;
    
            for(int i = 0 ; i < n ; i++) {
                if(nums[i] > max) {
                    max = nums[i] ;
                }
    
                if(nums[i] < min) {
                    min = nums[i] ;
                }
            }
    
            return GCD(max, min);
        }
    };

int main() {

   return 0;
}