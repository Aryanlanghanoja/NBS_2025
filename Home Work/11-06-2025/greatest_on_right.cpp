#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> replaceElements(vector<int>& arr) {
            int n = arr.size() ;
            int max_ele = -1 ;
            int prev_ele = arr[n-1];
            arr[n-1] = -1 ;
           
            for(int i = n - 2 ; i >= 0 ; i--) {
                max_ele = max(max_ele , prev_ele);
                prev_ele = arr[i];
                arr[i] = max_ele;
            }
    
            return arr;
        }
    };