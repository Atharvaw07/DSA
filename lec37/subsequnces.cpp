#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{
    // base case

    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }

        return;
    }

    // exclude
    solve(str, output, index + 1, ans);
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string> subseqeunce(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main()
{
    string str="abc";
    vector<string>ans1=subseqeunce(str);
    for (int  i = 0; i < ans1.size(); i++)
    {
        for (int j = 0; j < ans1[i].size(); j++)
        {
            cout<<ans1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}