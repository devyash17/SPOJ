#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;int x,y;
	while(t--)
	{
		cin>>x>>y;
		if(x%2==0)
		{
			if(y==x)
			cout<<2*x<<"\n";
			else if(y==x-2)
			cout<<2*x-2<<"\n";
			else cout<<"No Number\n";
		}
		else{
			if(y==x)
			cout<<2*x-1<<"\n";
			else if(y==x-2)
			cout<<2*x-3<<"\n";
			else cout<<"No Number\n";
		}
	}
	return 0;
}
