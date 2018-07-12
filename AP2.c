#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;long long int x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		long long int n=(2*z)/(x+y);
		cout<<n<<endl;
		if(x==y)
		{
			for(int i=0;i<n;i++)
			cout<<x<<" ";
			cout<<endl;
		}
		else{
			long long int d=(y-x)/(n-5),a=x-2*d;
			for(int i=0;i<n;i++)
			cout<<a+i*d<<" ";
			cout<<endl;
		}
	}
	return 0;
}
