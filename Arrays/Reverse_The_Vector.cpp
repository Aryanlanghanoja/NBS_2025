#include<bits/stdc++.h>
using namespace std;

void  Print_Array(vector<int> &Array) {
    for (int i = 0; i < Array.size() ; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void Reverse_The_Vector(vector<int> &Array) {
    reverse(Array.begin(), Array.end());
    return;
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

void Reverse_Using_2_Pointer(vector<int> &Array) {

    int left = 0;
    int right = Array.size() - 1;

    while (left < right) {
        swap(Array[left], Array[right]);
        left++;
        right--;
    }

    return;
}

void Solve() {
    vector<int> Array = Input_Array();

    cout << "Original Input Array :- " << endl;
    Print_Array(Array);

    Reverse_Using_2_Pointer(Array);

    cout << "After Reversing the Array :- " << endl;
    Print_Array(Array);

    return;
}

int main() {

    Solve();
    return 0;
}