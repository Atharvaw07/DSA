#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotated(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rm(n, vector<int>(n, 0));

    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            rm[j][n - i - 1] = matrix[i][j];
        }
    }

    matrix = rm;

    return matrix;
}


int main()
{
    vector<vector<int>> name = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  
}