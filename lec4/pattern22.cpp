// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;


int main(){
    int n=4;

    int i=1;
    while (i<=n)
    {
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1; 
        }

        int j=0;
        while(j<=n-i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
return 0;

}