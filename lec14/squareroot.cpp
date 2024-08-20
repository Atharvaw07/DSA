#include <iostream>
using namespace std;

long long int squareroot(int num)
{
    int start = 0;
    int end = num;
    int ans;

    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }

        if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int num, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter to find Square Root:";
    cin >> n;

    int tempSol = squareroot(n);

    cout << "The square root is " << morePrecision(n, 3, tempSol);

    return 0;
}