//Problem Link: https://toph.co/p/set-union

#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)

int main()
{

    set<int> st;
    set<int> :: iterator it;

    int n, m;
    cin>>n>>m;

    int in;

    for(int i=0; i<n; i++)
    {
        cin>>in;
        st.insert(in);
    }

    for(int i=0; i<m; i++)
    {
        cin>>in;
        st.insert(in);
    }

	it=st.begin();
	cout<<*it;
    for(it++; it!=st.end(); it++)
    {
        cout<<" "<<*it;
    }

    return 0;
}
