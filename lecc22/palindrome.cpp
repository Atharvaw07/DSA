#include <iostream>
using namespace std;

char lowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';

        return temp;
    }
}
int getLength(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (lowerCase(a[s]) == lowerCase(a[e]))
        {
            s++;
            e--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char a[20];
    cout << "Enter a String to check:";
    cin >> a;

    int len = getLength(a);

    cout << "Palindrome or Not:" << checkPalindrome(a, len);

    return 0;
}