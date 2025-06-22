#include<bits/stdc++.h>
using namespace std;

class Solution {
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

        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
            vector<int> ans(m + n , 0) ;
            int i = 0 ;
            int j = 0 ;
            int idx  = m ;
    
            while(i < m && j < n && idx < m + n) {
                if(nums1[i] <= nums2[j]) {
                    nums1[idx++] = nums1[i++];
                }
    
                else {
                    nums1[idx++] = nums2[j++];
                }
            }
    
            while(i < m) {
                nums1[idx++] = nums1[i++];
            }
    
            while(j < n) {
                nums1[idx++] = nums2[j++];
            }
    
            return ;
        }
    };

void Solve() {
    Solution solution ;

    int m = 3;
    int n = 3;
    // int m = solution.Input_Integer("m");
    // int n = solution.Input_Integer("n");

    // cout << "\nEnter the Values for Array - 1 :- " << endl ;
    // vector<int> nums1 = solution.Input_Array();

    // cout << "\nEnter the Values for Array - 2 :- " << endl ;
    // vector<int> nums2 = solution.Input_Array();

    vector<int> nums1 = { 1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    cout << "\nThe Array - 1 :-  " << endl  ;
    solution.Print_Array(nums1);

    cout << "\nThe Array - 2 :-  " << endl  ;
    solution.Print_Array(nums2);

    solution.merge(nums1,m,nums2,n);

    cout << "\nAfter The Merge Function Applied :- " << endl ;

    cout << "\nThe Array - 1 :-  " << endl  ;
    solution.Print_Array(nums1);

    cout << "\nThe Array - 2 :-  " << endl  ;
    solution.Print_Array(nums2);
}

int main() {
    Solve();
    return 0;
}