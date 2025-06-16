#include<bits/stdc++.h>
using namespace std;

pair<int , int> Binary_Search_Matrix (vector<vector<int>> &matrix, int key) {
    int n = matrix.size(); // # of rows
    int m = matrix[0].size(); // #  of cols
    int low = 0;
    int high = n * m - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / m;
        int col = mid % m;

        if(matrix[row][col] == key) {
            return {row, col};
        }

        else if(matrix[row][col] < key) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    return {-1, -1};
}

int main() {

    vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, 
                                  {6, 7, 8, 9, 10}, 
                                  {11, 12, 13, 14, 15}, 
                                  {16, 17, 18, 19, 20}, 
                                  {21, 22, 23, 24, 25},
                                };

    int key = 19;
    pair<int, int> index = Binary_Search_Matrix(matrix, key);
    int row = index.first;
    int col = index.second;

    if(row != -1 && col != -1) {
        cout << "The " << key << " Founded at ( " << row << " , " << col << " )" << endl;
    }

    else {
        cout << "The Key " << key << " Not Found In The Matrix." << endl;
    }

    return 0;
}