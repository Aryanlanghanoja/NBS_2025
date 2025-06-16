#include<bits/stdc++.h>
using namespace std;

void Print_Array(vector<int> &Array) {
    for(int i = 0 ; i < Array.size() ; i++) {
        cout << Array[i] << " " ;
    }

    cout << endl ;
}


void Merge(vector<int> &Array_1 , vector<int> &Array_2 , vector<int> &Array) {
    int i = 0 ; 
    int j = 0 ;
    int k = 0 ;
    int m = Array_1.size();
    int n = Array_2.size() ;

    while(i < m && j < n) {
        if(Array_1[i] <= Array_2[j]) {
            Array[k++] = Array_1[i++];
        }

        else {
            Array[k++] = Array_2[j++];          
        }
    }

    while(i < m) {
        Array[k++] = Array_1[i++];
    }

    while(j < n) {
        Array[k++] = Array_2[j++];         
    }
}

void Merge_Sort(vector<int> &Array , int left , int right) {
    if(left < right) {
        int mid = left + (right - left) / 2 ;
        
        Merge_Sort(Array, left, mid);
        Merge_Sort(Array, mid + 1, right);

        vector<int> lower(Array.begin() , Array.begin() + mid) ;
        vector<int> upper(Array.begin() + mid , Array.end());

        Merge(lower , upper , Array);
    }
}

int main() {

    vector<int> Array = {12, 87, 45, 23, 56, 90, 2, 76, 38, 59, 1, 84, 66, 43, 7};
    int left = 0 ;
    int right = Array.size() - 1;

    cout << "\nOriginal Input Array  :- " << endl ;
    Print_Array(Array);

    Merge_Sort(Array , left , right);

    cout << "\nAfter Applied Merge Sort  :- " << endl ;
    Print_Array(Array);

   return 0;
}