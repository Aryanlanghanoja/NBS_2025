#include<bits/stdc++.h>
using namespace std  ;

vector<int> Input_Array() {
    vector<int> Array;

    cout << "Enter -1 to Stop." << endl;
    int input;

    while(input != -1) {
        cin >> input;

        Array.push_back(input);
    }

    return Array;
}

int Find_Max(vector<int> Array) {
    int max_element = Array[0];
    int size = Array.size();

    for (int i = 1; i < size; i++) {
        max_element = max(Array[i], max_element);
    }

    return max_element;
}

void Print_Result(int max) {
    cout << "The Maximum Element in the Array is " << max << ".";
}

int main() {

    vector<int> Array = Input_Array();
    int max_element = Find_Max(Array);
    Print_Result(max_element);

    return 0;
}