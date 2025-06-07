#include<bits/stdc++.h>
using namespace std;

void Print_Map(map<int , int> &increment) {

    for (map<int, int>::iterator itr = increment.begin(); itr != increment.end(); itr++) {
        cout << itr->first << "\t" << itr->second << endl;
    }

    for(pair<int , int> itr : increment) {
        cout << itr.first << "\t" << itr.second << endl;
    }
}

void Insert_in_Map(map<int , int> &increment) {
    for (int i = 10; i > 0; i--) {
        increment[i] = i + 1;
    }
}

void Solve() {
    map<int, int> increment;
    Insert_in_Map(increment);
    Print_Map(increment);
}

int main() {
    Solve();
    return 0;
}