#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int i, j, row, column;
    row = matrix.size();
    column = matrix[0].size();
    for (i = 0; i < row; i++)
    {
        if (target >= matrix[i][0] && target <= matrix[i][column - 1])
        {
            for (j = 0; j < column; j++)
            {
                if (target == matrix[i][j])
                    return true;
                if (j == column - 1)
                    return false;
            }
        }
    }
    return false;
}
int main()
{
    int row, column, target;
    cin >> row >> column >> target;
    vector<vector<int>> matrix(row, vector<int>(column));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    if (searchMatrix(matrix, target))
        cout << "Element Founded";
    else
        cout << "Element Not Founded";
}
