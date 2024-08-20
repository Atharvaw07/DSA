#include<iostream>
using namespace std;


int main(){
    char ch;
    cout<<"Enter a Character:";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }
    else if (ch>='A' && ch<='Z'){
        cout<<"Uppercase";
  
    }
    else if (ch>='1'wg && ch<='9')
    {
      cout<<"Numberic";
    }
    else{
        cout<<"Special character";
    }
    
    

return 0;

}