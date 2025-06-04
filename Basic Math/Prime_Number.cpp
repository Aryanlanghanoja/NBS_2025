#include<bits/stdc++.h>
using namespace std;

bool Is_Prime(int n) {

    if(n < 2) {
        return false;
    }

    for (int i = 2; i <= (n / i); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

bool Prime(int n) {

    if(n == 1) {
        return false;
    }

    if (n == 2 || n == 3) {
        return true;
    }

    bool decrement = (n - 1) % 6 == 0 ? false : true;
    bool increment = (n + 1) % 6 == 0 ? false : true;

    return decrement | increment;

}

void Solve() {
    int n;

    cout << "Enter A Number :- ";
    cin >> n;

    string naive = Is_Prime(n) ? "Prime" : "Not Prime";
    string optimized = Prime(n) ? "Prime" : "Not Prime";

    cout << "The " << n << " Is Prime or not according to \nNaive (O(sqrt(n))):- " << naive << "\nOptimized (O(1)) :- " << optimized << endl;

    return;
}

int main() {
    Solve();
    return 0;
}