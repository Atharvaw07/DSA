#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int s = 10;

    vector<vector<int>> ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                int triplet = arr[i] + arr[j] + arr[k];
                if (triplet == s)
                {

                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    ans.push_back(temp);
                }
            }
        }
    }

    cout << "Printing Pair:" << endl;
    for (int m = 0; m < ans.size(); m++)
    {
        for (int n = 0; n < ans[m].size(); n++)
        {
            cout << ans[m][n] << " ";
        }
        cout << endl;
    }

    return 0;
}