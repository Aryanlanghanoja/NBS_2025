#include <bits/stdc++.h>
using namespace std;

void Print_Array(vector<int> &Array)
{
    for (int i = 0; i < Array.size(); i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void NGE(vector<int> &Array)
{
    cout << "\nNGE :- " << endl;

    stack<int> s;
    int n = Array.size();
    vector<int> Ans;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && Array[i] >= s.top())
        {
            s.pop();
        }

        if (s.empty())
        {
            Ans.push_back(-1);
        }

        else
        {
            Ans.push_back(s.top());
        }

        s.push(Array[i]);
    }

    reverse(Ans.begin(), Ans.end());
    Print_Array(Ans);
    cout << endl;
}

void NGI(vector<int> &Array)
{
}

void NSE(vector<int> &Array)
{
}

void NSI(vector<int> &Array)
{
}

void PGE(vector<int> &Array)
{
}

void PGI(vector<int> &Array)
{
}

void PSE(vector<int> &Array)
{
}

void PSI(vector<int> &Array)
{
}

int main()
{
    vector<int> Array = {1, 7, 9, 5, 8, 10};

    cout << "Original Array :- " << endl;
    Print_Array(Array);

    NGE(Array);

    return 0;
}