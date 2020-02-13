//Problem Link: https://toph.co/p/better-passwords

#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)

int main()
{

    string s;
    string rp;
    cin>>s;

    s[0] = toupper(s[0]);
    rp += s[0];


    for(int i=1; i<s.size(); i++)
    {
        if(s[i]=='o')
        {
            rp += "()";
            //rp += ')';
        }
        else if(s[i]=='s')
        {
            rp += '$';
            //rp += ')';
        }
        else if(s[i]=='i')
        {
            rp += '!';
            //rp += ')';
        }
        else rp += s[i];
    }

    rp += '.';
    cout<<rp<<endl;
    return 0;
}
