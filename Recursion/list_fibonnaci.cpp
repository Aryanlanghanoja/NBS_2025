#include<bits/stdc++.h>
using namespace std;

void list_fibonacci(int k , int n , int a , int b) {

    if(k > n) {
        return;
    }

    int c = a + b;
    cout << c << " ";

    list_fibonacci(k + 1, n, b, c);
}

void Print_Fibonacci_till_n(int n) {

    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    if(n == 2) {
        cout << 0 << " " << 1 << endl;
        return;
    }

    cout << 0 << " " << 1 << " ";
    list_fibonacci(3, n , 0, 1);
}

int main() {

    Print_Fibonacci_till_n(10);
    return 0;
}