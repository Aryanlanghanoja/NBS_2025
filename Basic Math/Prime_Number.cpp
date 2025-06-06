#include<bits/stdc++.h>
using namespace std;

bool Is_Prime(int n) {

    if(n < 2) {
        return false;
    }

    if(n % 2 == 0) {
        return n == 2;
    }

    for (int i = 3; i <= (n / i); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

bool Is_Prime_Faster(int n) {

    if(n < 2) {
        return false;
    }

    if(n % 2 == 0) {
        return n == 2;
    }

    for (int i = 3; i <= (n / i); i += 2) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

bool Prime(int n) {

    if(n < 2) {
        return false;
    }
    
    if(n < 4) {
        return true;
    }
    
    if (n % 2 == 0 || n % 3 == 0) {
        return false ;
    }
    
    for(int i = 5 ; i <= (n / i); i+= 6) {
        if(n % i == 0 || n % (i + 2) == 0) {
            return false ;
        }
    }
    
    return true;

}

void Solve() {
    int n;

    cout << "Enter A Number :- ";
    cin >> n;

    string naive = Is_Prime(n) ? "Prime" : "Not Prime";
    string faster = Is_Prime_Faster(n) ? "Prime" : "Not Prime" ;
    string optimized = Prime(n) ? "Prime" : "Not Prime";

    cout << "The " << n << " Is Prime or not according to \nNaive (O(sqrt(n))):- " << naive << "\nFaster (O(sqrt(n))) :- " << faster << "\nOptimized (O(1)) :- "   << optimized  << endl;

    return;
}

int main() {
    Solve();
    return 0;
}