#include <bits/stdc++.h>
using namespace std;

void Rotate_Anti_Clock_Wise(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i <= n / 2; i++)
    {
        swap(matrix[i], matrix[n - 1 - i]);
    }

    return;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();

    cout << "The Original Matrix:- \n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    Rotate_Anti_Clock_Wise(matrix);

    cout << "\nThe Anti Clock Wise Rotated Matrix:-\n " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}