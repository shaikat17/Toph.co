//Problem Link: https://toph.co/p/ascii-progress-bar

#include<bits/stdc++.h>
using namespace std;


int main()
{

    double rate;
    cin>>rate;

    int cnvrt = (int) rate;

    int pls = cnvrt/10;

    cout<<"[";
    for(int i=1; i<=10; i++)
    {
        if(i<=pls) cout<<"+";
        else cout<<".";

    }
    cout<<"] "<<cnvrt<<"%\n";

    return 0;
}
