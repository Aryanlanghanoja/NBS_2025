#include<bits/stdc++.h>
using namespace std;

void print(int n) {

    if(n < (1 << 15)) {
        print((n << 15) + 1);
    }

    else {
        if((n >> 15) == (n & ((1 << 15) - 1))) {
            cout << (n & ((1 << 15) - 1)) << "#" ;
        }

        else {
            cout << (n & ((1 << 15) - 1)) << " " ;
            print(n + 1);
        }
    }
}

int main() {

    int n ;

    cin >> n ;
    print(n);

    return 0;
}