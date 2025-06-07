#include<bits/stdc++.h>
using namespace std;

long long Calculate_Factorial(int number) {
    if(number == 0 || number == 1) {
        return 1;
    }

    else {
        return number * Calculate_Factorial(number - 1);
    }
}
int main() {

    int number;
    long long Factorial;

    cout << "Enter A Number :- ";
    cin >> number;

    Factorial = Calculate_Factorial(number);

    cout << "The Factorial of the " << number << " Is " << Factorial;

    return 0;
}