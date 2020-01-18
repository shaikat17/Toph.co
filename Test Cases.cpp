///Problem Link: https://toph.co/problems/easy-problems?start=32


#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n, cp, mm;
    cin>>n>>cp>>mm;

    int x, y, z, cnt=0;

    for(int i=0; i<n; i++)
    {
        cin>>x>>y>>z;

        if(y>cp) {
                cout<<"CLE\n";
                break;
        }
        else if(z>mm) {
                cout<<"MLE\n";
                break;
        }
        else if(x>0) {
                cout<<"WA\n";
                break;
        }
        else cnt++;

    }

    if(cnt==n) cout<<"AC\n";

    return 0;
}

