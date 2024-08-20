#include <iostream>
using namespace std;

int main()
{
    int amt;
    cout << "Enter a amount:";
    cin >> amt;

    int n100, n50, n20, n10, n1;

    switch (1)
    {
    case 1:
        n100 = amt / 100;
        amt = amt % 100;
        cout << "Rs100 notes:" << n100 << endl;

    case 2:
        n50 = amt / 50;
        amt = amt % 50;
        cout << "Rs50 notes:" << n50 << endl;

    case 3:
        n20 = amt / 20;
        amt = amt % 20;
        cout << "Rs20 notes:" << n20 << endl;

    case 4:
        n10 = amt / 10;
        amt = amt % 10;
        cout << "Rs10 notes:" << n10 << endl;

    case 5:
        n1 = amt / 1;
        amt = amt % 1;
        cout << "Rs1 coin:" << n1 << endl;

    default:
        break;
    }
    return 0;
}