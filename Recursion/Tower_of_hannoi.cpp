#include<bits/stdc++.h>
using namespace std;

int calc_step(int n) {
    if(n == 0) {
        return 0;
    }

    return 2 * calc_step(n - 1) + 1;
}

double calc_step_opt(int n) {
    if (n <= 0) 
        return 0;
    return pow(2, n) - 1;
}


int main() {

    int n =  15;

    for (int i = 1; i <= n; i++) {
        cout << i << " " << calc_step(i) << " " << calc_step_opt(i) << "\n";
    }
        return 0;
}