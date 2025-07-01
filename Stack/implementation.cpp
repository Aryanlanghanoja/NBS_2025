#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> s1;
    stack<int> s2;

    for (int i = 5; i >= 1; i--)
    {
        s1.push(i);
    }

    for (int i = 10; i >= 6; i--)
    {
        s2.push(i);
    }

    s1.swap(s2);

    return 0;
}