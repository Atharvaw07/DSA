#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    vector<int> ans;

    while (count < total)
    {
        // print starting row
        for (int i = startingRow; count < total && i <= endingCol; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // print ending col
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // print starting col
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> name = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> result = spiralPrint(name);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}