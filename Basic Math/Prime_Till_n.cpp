#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n == 1) {
        return false;
    }

    if (n == 2 || n == 3) {
        return true;
    }

    bool decrement = ((n - 1) % 6 == 0) ;
    bool increment = ((n + 1) % 6 == 0) ;

    return decrement | increment;
}

vector<int> Prime_Numbers(int n) {
    vector<int> Answer;

    for (int i = 1; i <= n; i++) {

        if(is_prime(i)) {
            Answer.push_back(i);
        }
    }

    return Answer;
}

void  Print_Array(vector<int> &Array) {
    for (int i = 0; i < Array.size() ; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void Solve() {

    int n;

    cout << "Enter A Number :- ";
    cin >> n;

    vector<int> Answers = Prime_Numbers(n);

    cout << "Prime Numbers till " << n << " Are :- " << endl;
    Print_Array(Answers);

    return;
}

int main() {
    Solve();
    return 0;
}