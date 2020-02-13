//Problem Link: https://toph.co/p/caesar-cipher

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int k;
    cin>>k;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, str);
    for(int i=0; i<str.size(); i++)
    {
        switch(str[i])
        {
        case 'a'...'z':
            str[i]=(((str[i]-122)-k)%26)+122;
            break;

        }
    }
    cout<<str<<endl;
}
