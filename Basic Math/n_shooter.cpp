#include <bits/stdc++.h>
using namespace std;

// Logic
int n_shooter_logic(int n, int k)
{
    vector<int> people(n);
    iota(people.begin(), people.end(), 1);

    int current_index = 0;

    while (people.size() > 1)
    {
        current_index = (current_index + k - 1) % people.size();
        people.erase(people.begin() + current_index);
    }

    return people[0];
}

// Math
int n_shooter_math(int n)
{
    if (n <= 0)
    {
        return 0;
    }

    int m = static_cast<int>(floor(log2(n)));
    int power_of_2 = static_cast<int>(pow(2, m));
    int survivor = 2 * (n - power_of_2) + 1;

    return survivor;
}

int main()
{
    int n;
    cout << "Enter the total number of people (n): ";
    cin >> n;

    int k = 2;

    if (n <= 0)
    {
        cout << "Number of people must be positive." << std::endl;
    }
    else
    {
        int logic = n_shooter_logic(n, k);
        int math = n_shooter_math(n);
        cout << "logic :- " << logic << endl;
        cout << "math :- " << math << endl;
    }

    return 0;
}
