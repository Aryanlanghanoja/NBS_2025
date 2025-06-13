#include<bits/stdc++.h>
using namespace std;

void row_major(int row, int col) {
    vector<vector<int>> matrix(row, vector<int> (col , 0));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            matrix[i][j] = i * col + j + 1 ;
        }
    }

    cout << "Row Major Matrix is :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// void col_major(int row, int col) {
//     vector<vector<int>> matrix(row, vector<int> (col , 0));

//     int val = 1;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++) {
//             matrix[i][j] = j * row + i + 1;
//         }
//     }

//     cout << "Column Major Matrix is :- " << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

void col_major(int row, int col) {
    vector<vector<int>> matrix(row, vector<int> (col , 0));

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++) {
            matrix[i][j] = j * row + i + 1;
        }
    }

    cout << "Column Major Matrix is :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row, col;

    cin >> row >> col;
    row_major(row, col);
    col_major(row, col);
    return 0;
}