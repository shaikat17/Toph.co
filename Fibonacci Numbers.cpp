//Problem Link: https://toph.co/p/fibonacci-numbers

#include<iostream>
using namespace std;
int main()
{
	int n, temp=1, nvl=1, show=0;
	cin>>n;
	//cout<<temp<<" "<<nvl<<" ";
			
	for(int i=2; i<n; i++)
	{
		
		show  = temp + nvl;
		temp=nvl;
		nvl=show;
		//cout<<show<<" ";
	}
	
	cout<<show;
	return 0;
}
