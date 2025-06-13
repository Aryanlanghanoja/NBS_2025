#include<bits/stdc++.h>
using namespace std;

class Solution {
   public:
       vector<int> productExceptSelf(vector<int>& nums) {
           int whole_product = 1 ;
           int n = nums.size();
           int num_zero = 0 ;
   
           for(int i = 0 ; i < n ; i++) {
               if(nums[i] != 0) {
                   whole_product *= nums[i] ;
               }
   
               else {
                   num_zero++;
               }
           }
   
           if(num_zero > 1) {
               return vector<int>(n, 0);
           }
   
           else if(num_zero == 1) {
               for(int i = 0 ; i < n ; i++) {
                   if(nums[i] == 0) {
                       nums[i] = whole_product ;
                   }
   
                   else {
                       nums[i] = 0 ;
                   }
               }
   
               return nums ;
           }
   
           else {
               for(int i = 0 ; i < n ; i++) {
                   nums[i] = whole_product / nums[i] ;
               }
   
               return nums ;
           }
   
   
       }
   };

int main() {

   return 0;
}