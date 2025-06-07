#include<bits/stdc++.h>
using namespace std;

void Print(int n , int k) {

    if(n > k) {
        cout << endl;
        return;
    }

    cout << n << " ";
    return Print(n + 1, k);
}

int main() {

    int lower;
    int upper;
    bool direction;

    cout << "Enter The Lower Bound :- ";
    cin >> lower;

    cout << "Enter The Upper Bound :- ";
    cin >> upper;

    cout << "Enter the Direction (0 - Decrement , 1 - Increment) :- ";
    cin >> direction;

    if(direction) {
        Print(lower, upper);
    }

    else {
        Print(upper, lower);
    }

    return 0;
}