// 1234
//  234
//   34
//    4
#include<iostream>
using namespace std;


int main(){
    int n=4;

    int i=1;
    while (i<=n)
    {
        int space=i-1;
        while (space)
        {
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while (j<=n-i+1)
        {
            cout<<j+i-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
return 0;

}