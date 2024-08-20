
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string removeDuplicates(string S) {
    if(S.size()<2)
        return S;
    for(int i=0; i<S.size()-1; i++)
    {
      if(S[i]==S[i+1])
      {
          S.erase(i,2); 
          return removeDuplicates(S);
      }
    }
    return S;
}
    
int main()
{
    string s="geegforgeegs";
    cout<<removeDuplicates(s);
    return 0;
}