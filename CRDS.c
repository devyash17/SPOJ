#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n;
	long long int ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=n*n+n+n*(n-1)/2;
		cout<<ans%1000007<<"\n";
	}
	return 0;
}
