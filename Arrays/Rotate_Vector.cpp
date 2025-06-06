#include<bits/stdc++.h>
using namespace std;

void  Print_Array(vector<int> &Array) {
    for (int i = 0; i < Array.size() ; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
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

int Input_Times() {

    int k;

    cout << "\nEnter the No of times you want to Rotate :- " ;
    cin >> k;

    return k;
}

bool Input_Direction() { 
    string direction;

    cout << "\nEnter the direction of Rotation (left or right) :- ";
    cin >> direction;

    transform(direction.begin(), direction.end(), direction.begin(), ::tolower);

    if (direction == "left") {
        return 0;
    } else if (direction == "right") {
        return 1;
    } else {
        cout << "Invalid input. Defaulting to left.\n";
        return 0;
    }
}

void Left_Rotate(vector<int> &Array , int k) {

    vector<int> backup;
    int n = Array.size();
    k = k % n;

    for (int i = k - 1; i < n ; i++) {
        backup.push_back(Array[i]);
    }

    for (int i = 0; i < n - k ; i++) {
        Array[i + k] = Array[i];
    }

    for (int i = 0; i < k; i++) {
        Array[i] =  backup[i];
    }

    cout << "\nArray Left Rotated " << k << " Times." << endl;

    return;
}

void Right_Rotate(vector<int> &Array , int k) {

    vector<int> backup;
    int n = Array.size();
    k = k % n;

    for (int i = 0; i < k ; i++) {
        backup.push_back(Array[i]);
    }

    for (int i = k ; i < n ; i++) {
        Array[i - k] = Array[i];
    }

    for (int i = 0; i < k; i++) {
        Array[i + n - k] =  backup[i];
    }

    cout << "\nArray Right Rotated " << k << " Times." << endl;

    return;
}

void Rotate(vector<int> &Array , bool direction , int k) {

    int n = Array.size();
    k = k % n;

    if(k > (n / 2)) {
        direction = !direction;
        k = n - k;
    }

    if(direction) {
        Right_Rotate(Array, k);
    }

    else {
        Left_Rotate(Array, k);
    }
}

void Solve() {
    vector<int> Array = Input_Array();
    bool direction = Input_Direction();
    string directions[2] = { "left", "right" };
    int k = Input_Times();

    cout << "\nOriginal Input Array :- " << endl;
    Print_Array(Array);

    Rotate(Array, direction, k);

    cout << "\nAfter " << directions[direction]  << " rotating the Array " << k << " Times :- " << endl;
    Print_Array(Array);

    return;
}

int main() {

    // Time Complexity :- O(n) , k = 3/2
    // Space Complexity :- O(n) , k = 1/2
    Solve();
    return 0;
}