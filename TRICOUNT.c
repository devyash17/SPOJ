#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,t,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=(n*(n+2)*(2*n+1))/8;
		cout<<ans<<endl;
	}
	return 0;
}
