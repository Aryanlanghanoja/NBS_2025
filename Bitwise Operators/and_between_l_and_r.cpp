#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned left = 416;
    unsigned right = 436;

    bitset<32> start = left;
    bitset<32> end = right

        ;
    unsigned ans = left;

    for (unsigned int i = left + 1; i <= right; i++)
    {
        ans &= i;
    }

    bitset<32> bits = ans;
    cout << "Start :- " << left << " " << start << endl;
    cout << "End :- " << right << " " << end << endl;
    cout << "Answer :- " << ans << " " << bits << endl;
    return 0;
}