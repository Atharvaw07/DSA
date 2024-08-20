#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter number to check if it's a power of 2: ";
    cin >> n;

    bool isPowerOf2 = false; // Track if the number is a power of 2

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            isPowerOf2 = true;
            break;
        }
    }

    if (isPowerOf2)
    {
        cout << "The number is a power of 2" << endl;
    }
    else
    {
        cout << "The number is not a power of 2" << endl;
    }

    return 0;
}
