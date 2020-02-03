//Problem Link: https://toph.co/p/n-th-prime


#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)

#define vll vector<long long>
#define ll long long

vll vec;
vector<bool> arr;

void sieve()
{
    for(ll i=0; i<=8000000; i++)
    {
        arr.push_back(true);
    }

    for(ll i=2; i*i<=8000000; i++)
    {
        if(arr[i]==true)
        {
            for(ll j=i*i; j<=8000000; j+=i) arr[j]=false;
        }
    }


    for(ll i=2; i<=8000000; i++)
    {
        if(arr[i]==true) vec.push_back(i);
    }
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int n;
    cin>>n;

    sieve();

    cout<<vec[n-1]<<endl;

    return 0;
}
