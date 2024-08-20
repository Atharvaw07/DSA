#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{

    // base case
    if (i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    // recusrive call
    reverse(str, i, j);
}

int main()
{

    string str = "atharva";

    reverse(str, 0, str.length() - 1);
    cout << "Ans:" << str;

    return 0;
}