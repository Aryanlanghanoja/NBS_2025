#include<iostream>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main() {
    int n;
    cout << "Enter the number of iterations: ";
    cin >> n;

    forn(i, n) {
        cout << "Iteration " << i + 1 << endl;
    }

    return 0;
}