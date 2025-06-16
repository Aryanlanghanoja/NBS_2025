#include<bits/stdc++.h>
using namespace std;

int main() {

    int x = 1;
    int y = 1;
    bool a = --x || --y;
    bool b = x++ || y++;

    cout << a << "\t" << b << "\t" << x << "\t" << y << "\n";
    return 0;
} 