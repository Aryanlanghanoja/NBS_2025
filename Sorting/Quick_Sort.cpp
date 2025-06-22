#include <bits/stdc++.h>
using namespace std;

void Swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void Print_Array(vector<int> Array) {
    for (int i = 0; i < Array.size(); i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int Partion(vector<int>& Array, int left, int right) {

    int pivot = Array[left] ;
    int pivot_index = left ;
    int i = left + 1 ;
    int j = right ;

    while(i <= j) {
        while(i <= right && Array[i] <= pivot) {
            i++;
        }

        while(j > left && Array[j] < pivot) {
            j--;
        }

        if(i < j) {
            Swap(Array[i] , Array[j]);
        }
    }

    Swap(Array[pivot_index] , Array[j]);

    return j;
}

void Quick_Sort(vector<int>& Array, int left, int right) {
    if (left < right) {
        int Pivot_Index = Partion(Array, left, right);
        Quick_Sort(Array, left, Pivot_Index - 1);
        Quick_Sort(Array, Pivot_Index + 1, right);
    }

    return ;
}

int main() {
    // vector<int> Array = { 2,4,1,3,5 };
    vector<int> Array = { 12, 45, 57, 78, 89, 62, 7, 49, 21, 23 };
    int size = Array.size();

    cout << "\nArray Before Sorting :- " << endl;
    Print_Array(Array);

    Quick_Sort(Array, 0, size - 1);

    cout << "\nArray After Sorting :- " << endl;
    Print_Array(Array);

    return 0;
}