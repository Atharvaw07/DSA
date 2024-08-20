#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i,int j)
{

    // base case
    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        checkPalindrome(str, i + 1, j - 1);
    }
}

int main()
{

    string str = "BookkooB";

    bool isPlaindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPlaindrome)
    {
        cout << "Its a Palindrome";
    }
    else
    {
        cout << "Its not a Palindrome";
    }
    return 0;
}