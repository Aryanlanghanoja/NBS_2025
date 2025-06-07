#include<bits/stdc++.h>
using namespace std;

void  Print_Array(vector<int> &Array) {
    for (int i = 0; i < Array.size() ; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

// vector<int> Prefix_Sum(vector<int> &Array) {

//     int n = Array.size();
//     vector<int> Answer(n, 0);

//     for (int i = 0; i <= n; i++) {

//         for (int j = 0; j <= i; j++) {
//             Answer[i] += Array[j];
//         }
//     }

//     return Answer;
// }

// vector<int> Prefix_Sum_Faster(vector<int> &Array) {

//     int n = Array.size();
//     vector<int> Answer(n, 0);

//     Answer[0] = Array[0];

//     for (int i = 1; i < n; i++) {

//         Answer[i] = Answer[i - 1] + Array[i];

//         // for (int j = 0; j <= i; j++) {
//         //     Answer[i] += Array[j];
//         // }
//     }

//     return Answer;
// }

void Prefix_Sum_Faster_In_Place(vector<int> &Array) {

    int n = Array.size();

    for (int i = 1; i < n; i++) {
        Array[i] += Array[i - 1];
    }

    return ;
}

// vector<int> Suffix_Sum(vector<int> &Array) {

//     int n = Array.size();
//     vector<int> Answer(n, 0);

//     for (int i = 0; i <= n; i++) {

//         for (int j = i; j < n; j++) {
//             Answer[i] += Array[j];
//         }
//     }

//     return Answer;
// }

void Suffix_Sum_Faster_In_Place(vector<int> &Array) {

    int n = Array.size();

    for (int i = n - 2; i >= 0; i--) {
        Array[i] = Array[i + 1];
    }

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

void Solve() {
    vector<int> Prefix_Array = Input_Array();
    vector<int> Suffix_Array = Prefix_Array;

    cout << "\nOriginal Input Array :- " << endl;
    Print_Array(Prefix_Array);

    Prefix_Sum_Faster_In_Place(Prefix_Array);

    cout << "\nPrefix Sum of the Array :- " << endl;
    Print_Array(Prefix_Array);

    Suffix_Sum_Faster_In_Place(Suffix_Array);

    cout << "\nSuffix Sum of the Array :- " << endl;
    Print_Array(Suffix_Array);

    return;
}

int main() {

    Solve();
    return 0;
}