#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n) {
    if(n < 2) {
        return n;
    }

    Fibonacci(n - 1) + Fibonacci(n - 2);
}

void Print_Fibonacci_till_n(int n) {
    for (int i = 0; i <= n; i++) {
        cout << Fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {

    Print_Fibonacci_till_n(10);
    return 0;
}