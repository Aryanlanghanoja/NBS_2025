#include<bits/stdc++.h>
using namespace std;

double deviation(int n , double root) {
    double est = root * root;
    double diff = abs(n - est);
    double perc_diff = diff / n * 100;

    return perc_diff;
}

double helper(int n , double guess) {

    while(deviation(n , guess) >= 0.001) {
        cout << guess << endl;
        double div = n / guess;
        double avg = (guess + div) / 2.0;
        guess = avg;
    }

    return guess;
}

double mySquareroot(int n) {
    double guess = 69;
    return helper(n, guess);
}

int main() {

    int n;
    cin >> n;

    cout << mySquareroot(n);

    return 0;
}