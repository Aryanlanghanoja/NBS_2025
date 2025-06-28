#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int Total_Count_of_Set_Bits_till_n(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int b = floor(log2(n));
    int rem = n - ((1 << b) - 1);
    int bits = b * (1 << (b - 1)) + rem;

    return bits + Total_Count_of_Set_Bits_till_n(rem - 1);
}

int main()
{

    int n = 1.5 * 1e9;

    auto start = high_resolution_clock::now();

    int set_bits = Total_Count_of_Set_Bits_till_n(n);

    // End timer
    auto end = high_resolution_clock::now();

    // Calculate duration
    auto duration = duration_cast<milliseconds>(end - start);

    cout << "\nTime taken to calculate: " << duration.count() << " milliseconds" << endl;

    cout << "Set Bits :- " << set_bits << endl;

    return 0;
}