#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> matrix[i][j];
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row - 1; j++)
        {
            cout << matrix[j][i] << " ";
        }

        cout << matrix[row - 1][i] << endl;
    }
}