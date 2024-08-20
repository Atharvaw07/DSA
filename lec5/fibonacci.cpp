#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    for (int i = 0; i <= n; i++)
    {

        int sum = a + b;
        cout << sum << " ";
        
        a=b;
        b=sum;
    }

    return 0;
}