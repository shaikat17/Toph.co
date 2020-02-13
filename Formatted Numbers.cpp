//Problem Link: https://toph.co/p/formatted-numbers

#include<bits/stdc++.h>
using namespace std;
#define T int t; cin>>t; while(t--)


int main()
{

    string s;
    string ss={0};

    cin>>s;
        int j=s.size();
    for(int i=0; i<s.size(); i++)
    {
        if((j-i)%3==0 && i>0) cout<<',';

         cout<<s[i];


    }

}
