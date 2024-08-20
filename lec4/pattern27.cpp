// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n-i+1)
        {
            cout << j;
            j = j + 1;
        }

        int star1=i-1;
        while(star1){
            cout<<"*";
            star1=star1-1;
        }

        int star2=i-1;
        while(star2){
            cout<<"*";
            star2=star2-1;
        }

       int j2 = n - i + 1;
        while (j2)
        {
            cout << j2;
            j2 = j2 - 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    return 0;
}