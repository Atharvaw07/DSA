#include <iostream>
using namespace std;

bool isEven(int num)
{
    // odd
    if (num & 1)
    {
        return 0;
    }

    return 1;
}

int main()
{

    int num;
    cin >> num;

    if (isEven(num))
    {
        cout << "Even";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}