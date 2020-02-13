//Problem Link: https://toph.co/p/goat-research

#include<bits/stdc++.h>
using namespace std;

#define T int t; cin>>t; while(t--)
#define vll vector<long long>
#define ll long long
#define read(t) ll t; cin>>t;
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)


int main()
{
    
    FAST;
    //cout<<fixed<<setprecision(2);


   int n;
   cin>>n;

   string s;
   string res[n+1];

   int mx=0, ln, cur;

   for(int i=0; i<n; i++)
   {
       cin>>s;
       ln = s.size();
       cur = ln-1;

       if(cur==1)
       {
           s+='a';
           res[i]=s;
       }
       else if(cur%2==1)
       {
           s.erase(cur);
           res[i]=s;
       }

       else res[i]=s;
		
	   ln = res[i].size();
       mx = max(mx,ln);

   }

   int md = mx/2;
   for(int i=0; i<n; i++)
   {
       ln = res[i].size();
       int space = md - (ln/2);

       for(int j=0; j<space; j++) cout<<" ";
       cout<<res[i]<<endl;
   }




   return 0;
}
