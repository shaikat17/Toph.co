//Problem Link: https://toph.co/p/fair-distribution

#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)

int main()
{

    int x, y;
    cin>>x>>y;

    int rp = y;

    for(int i=0; i<x; i++)
    {
        if(y%x!=0) y++;
    }

    cout<<y-rp<<endl;
    return 0;
}
