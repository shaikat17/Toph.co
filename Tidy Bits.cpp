//Problem Link: https://toph.co/p/tidy-bits




#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)
#define vll vector<long long>
#define ll long long
#define read(t) ll t; cin>>t;
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)


int count_b_1(int n)
{
    int cnt=0;
    while(n)
    {
        if(n%2==1) cnt++;
        n/=2;
    }
    return cnt;
}

int main()
{
    
    FAST;

    int n;
    cin>>n;

    int cnt = count_b_1(n);

    for(int i=1; i<n; i++)
    {
        int c=count_b_1(i);

        if(cnt==c)
        {
            cout<<i<<endl;
            break;
        }
    }




   return 0;
}
