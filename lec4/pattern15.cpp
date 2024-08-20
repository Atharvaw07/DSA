// A
// BC
// DEF
// GHIJ
#include<iostream>
using namespace std;


int main(){
    int n=4;

    int i=1;
    char value='A';
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<value;
            value=value+1;
            j=j+1;    
        }
        cout<<endl;
        i=i+1;
    }

    
return 0;

}