//Problem Link: https://toph.co/p/matching-brackets

#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("input.txt", "r", stdin);

    stack<char> s;

    string ss;

    cin>>ss;

    for(int i=0; i<ss.size(); i++)
    {
        if(ss[i]=='(' || ss[i]=='{' || ss[i]=='[') s.push(ss[i]);

        else if(s.empty())
        {
            cout<<"No\n";
            return 0;
            }

        else if(ss[i]==')')
            {

            if(s.top()=='(') s.pop();

            }

        else if(ss[i]==')')

        {
            if(s.top()=='(') s.pop();
        }

        else if(ss[i]=='}')
        {
            if(s.top()=='{') s.pop();
        }

        else if(ss[i]==']')
        {
            if(s.top()=='[') s.pop();
        }
    }

    if(s.empty()) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
