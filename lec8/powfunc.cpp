#include<iostream>
using namespace std;

int pow(int a,int b){

        int ans=1;

        for (int i = 1; i <=b; i++)
        {
            ans=ans*a;
        }
        return ans;
}

int main(){
        int a,b;
        cin>>a>>b;
      

        int ans1=pow(a,b);
        cout<<"ANS:"<<ans1;

return 0;

}