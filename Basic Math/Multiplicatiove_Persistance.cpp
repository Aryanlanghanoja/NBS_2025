#include<bits/stdc++.h>
using namespace std;

int calc_multiplication(int num) {

    int ans = 1 ;

    while(num) {
        ans *= num % 10;
        num /= 10;
    }

    return ans;
}

int calc_addition(int num) {

    int ans = 0 ;

    while(num) {
        ans += num % 10;
        num /= 10;
    }

    return ans;
}

int num_digit(int num) {
    if(num == 0) {
        return 1;
    }

    else {
        return floor(log10(abs(num))) + 1;
    }
}

int additive_persistence(int num) {
    int steps = 0;
    int digit = num_digit(num);

    while(digit > 1) {
        num = calc_addition(num);
        digit = num_digit(num);
        steps++;
    }

    return steps;
}

int multiplicative_persistence(int num) {
    int steps = 0;
    int digit = num_digit(num);

    while(digit > 1) {
        num = calc_multiplication(num);
        digit = num_digit(num);
        steps++;
    }

    return steps;
}

int main() {

    int num;

    cout << "Enter the Number :- " << endl;
    cin >> num;

    cout << "Additive Persistence Is :- " << additive_persistence(num) << endl;
    cout << "Multiplicative Persistence Is :- " << multiplicative_persistence(num) << endl;

    return 0;
}