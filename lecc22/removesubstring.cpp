#include<iostream>
#include<string>

using namespace std;

string removeOccurences(string s,string part){
    while (s.length()!=0 && s.find(part)<s.length())  
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}


int main(){
    string a="daabcbaabcbc";
    string part="abc";

    cout<<removeOccurences(a,part);

return 0;

}