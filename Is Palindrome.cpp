#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s, m;
	cin>>s;
	
	m=s; //store the copy of s
	reverse(s.begin(), s.end()); //reverse thr string
	
	if(m==s) //checking the reverse string and input string
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	
	return 0;
}
