#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b,p;
		cin>>b>>p;
		b=b%10;
		if(p==0)
		{ cout<<"1\n";continue; }
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
