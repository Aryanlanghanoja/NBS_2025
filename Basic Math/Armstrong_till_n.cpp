#include<bits/stdc++.h>
using namespace std;

int Count_Digit(int n) {
    if (n == 0) {
        return 1;
    }
    
    return log10(n) + 1;
}

int int_pow(int base, int exp) {
    int result = 1;

    while (exp--) {
        result *= base;
    }

    return result;
}

bool is_Armstrong (int n) {
    int sum = 0 ;
    int copy = n ;
    int power = Count_Digit(n);

    while(n) {
        int digit = n % 10 ;
        sum += int_pow(digit , power) ;
        n /= 10  ;
    }
    
    return copy == sum ;
}

vector<int> Armstrong_Numbers(int n) {
    vector<int> Answer;

    for (int i = 1; i <= n; i++) {
        bool is_armstrong = is_Armstrong(i);

        if(is_armstrong) {
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

    vector<int> Answers = Armstrong_Numbers(n);

    cout << "Armstrong Numbers till " << n << " Are :- " << endl;
    Print_Array(Answers);

    return;
}

int main() {
    Solve();
    return 0;
}