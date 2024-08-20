//complier error
// running succesfully on online complier

#include<iostream>
#include <cmath>
#include<math.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter a negative number:";
    cin>>n;

    int newN=abs(n);

    int ans=0;
    int i=0;
    while (newN!=0)
    {
        int bit=newN&1;
        ans=(bit*pow(10,i))+ans;
        newN=newN>>1;
        i++;
        
    }

    int ones=~(ans);

    int twos=ones+1;

    cout<<"Ans:"<<twos;
    


    
return 0;

}