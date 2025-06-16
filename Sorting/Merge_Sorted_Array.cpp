#include<bits/stdc++.h>
using namespace std;

void Print_Array(vector<int> &Array) {
    for(int i = 0 ; i < Array.size() ; i++) {
        cout << Array[i] << " " ;
    }

    cout << endl ;
}


vector<int> Merge_Sorted_Array(vector<int> &Array_1 , vector<int> &Array_2) {
    int i = 0 ; 
    int j = 0 ;
    int k = 0 ;
    int m = Array_1.size();
    int n = Array_2.size() ;
    vector<int> Sorted(m + n , 0);

    while(i < m && j < n) {
        if(Array_1[i] <= Array_2[j]) {
            Sorted[k++] = Array_1[i++];
        }

        else {
            Sorted[k++] = Array_2[j++];          
        }
    }

    while(i < m) {
        Sorted[k++] = Array_1[i++];
    }

    while(j < n) {
        Sorted[k++] = Array_2[j++];         
    }

    return Sorted;
}

int main() {

    vector<int> Array_1 = {12, 87, 45, 23, 56, 90, 2, 76, 38, 59, 1, 84, 66, 43, 7};
    vector<int> Array_2 = {83, 25, 47, 16, 90, 12, 6, 54, 73, 18, 31, 44, 67, 1, 99};

    sort(Array_1.begin() , Array_1.end());
    sort(Array_2.begin() , Array_2.end());

    vector<int> Sorted = Merge_Sorted_Array(Array_1 , Array_2);

    Print_Array(Sorted);
   return 0;
}