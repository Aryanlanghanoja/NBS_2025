#include<bits/stdc++.h>
using namespace std;

void  Print_Array(vector<int> &Array) {
    for (int i = 0; i < Array.size() ; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void Print_Map(map<int , int> &increment) {

    for (map<int, int>::iterator itr = increment.begin(); itr != increment.end(); itr++) {
        cout << itr->first << "\t" << itr->second << endl;
    }
}

vector<int> Input_Array() {
    vector<int> Array;

    cout << "Enter the Values for the array and -1 to Stop." << endl;
    int input;

    while (true) {
        cin >> input;
        if (input == -1)
            break;
        Array.push_back(input);
    }

    return Array;
}

vector<int> Calculate_Mode(vector<int> &Array) {
    unordered_map<int, int> Frequency;
    vector<int> mode_list;

    for(int i : Array) {
        Frequency[i]++;
    }

    unordered_map<int, int>::iterator itr;
    int Max_Count = INT_MIN;

    for (itr = Frequency.begin(); itr != Frequency.end(); itr++) {

        if(itr->second < Max_Count) {
            continue;
        }
        
        if(itr->second > Max_Count) {
            Max_Count = itr->second;
            mode_list.clear();
        }

        mode_list.push_back(itr->first);
    }

    return mode_list;
}

void Solve() {
    vector<int> Array = Input_Array();

    cout << "Original Input Array :- ";
    Print_Array(Array);

    vector<int> Mode = Calculate_Mode(Array);

    cout << "Modes are :- ";
    Print_Array(Mode);
}

int main() {
    Solve();
    return 0;
}