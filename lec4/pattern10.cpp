// AAA
// BBB
// CCC
#include<iostream>
using namespace std;


int main(){
    int n=3;

    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+i-j;
        while(j<=n){
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
return 0;

}