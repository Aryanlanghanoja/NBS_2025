#include<bits/stdc++.h>
using namespace std;

int Input_n() {
    int n;

    cout << "\nEnter the n :- ";
    cin >> n;

    return n;
}

// This Is an Euclidean Algorithm
// TC :- o(log(max(a,b)))
int gcd(int a, int b) { 

    if(b == 0) {
        return a;
    }

    else {
        cout << "GCD(" << b << " , " << a % b << ")" << endl;
        return gcd(b, a % b);
    }

}

int main() {

    int a = Input_n();
    int b = Input_n();
    cout << "GCD of " << a << " and " << b << " Is " << gcd(a,b) << "." << endl;
    return 0;
}