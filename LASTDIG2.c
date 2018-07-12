#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s;
	long long int p;int d;
	while(t--)
	{
		cin>>s>>p;
		if(p==0)
		{ cout<<"1\n";continue; }
		int len=s.length();
		int b=s[len-1]-48;
		//cout<<len<<" "<<b<<"\n";
		if(b==0 || b==1 || b==5 || b==6)
		cout<<b<<"\n";
		else if(b==2 || b==3 || b==7 || b==8)
		{
			int k=p%4,ans=1;if(k==0) k=4;
			for(int i=1;i<=k;i++)
				ans*=b;
			cout<<ans%10<<"\n";
		}
		else
		{
			int k=p%2,ans=1;if(k==0) k=2;
			for(int i=1;i<=k;i++)
				ans*=b;
			cout<<ans%10<<"\n";
		}
	}
	return 0;
}
