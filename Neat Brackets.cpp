///Problem link: https://toph.co/p/neat-brackets


#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s;
    cin>>s;

    int cnt=0, cnt2=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(') cnt++;
        else cnt--;
        if(cnt<0)
        {
            cout<<"No\n";
            return 0;
        }
    }

    if(cnt==0) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}

