//Problem Link: https://toph.co/problems/easy-problems?start=32

#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n, star, end;
    cin>>n>>star>>end;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    int sm=0;

    for(int i=star; i<=end; i++)
    {
        sm += arr[i];
    }

    cout<<sm<<endl;

    return 0;
}
