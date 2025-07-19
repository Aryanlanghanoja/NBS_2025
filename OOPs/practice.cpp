#include <bits/stdc++.h>
using namespace std;

int a = 5;

void A()
{
    cout << "From A :- " << a << endl;
}

void B()
{
    int a = 10;
    cout << "From B :-" << a << endl;
    A();
}

int main()
{
    int a = 15;
    cout << "From Main :- " << a << endl;
    B();
    return 0;
}