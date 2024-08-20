#include<iostream>
using namespace std;

void printNum(int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    
}
int main(){
    int num;
    cin>>num;

    printNum(num);
return 0;

}