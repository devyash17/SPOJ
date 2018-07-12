#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1)
		break;
		int arr[n],sum=0;
		for(int i=0;i<n;i++)
		{ cin>>arr[i];sum+=arr[i]; }
		if(sum%n!=0)
		{ cout<<"-1\n";continue; }
		int avg=sum/n,ans=0;
		for(int i=0;i<n;i++)
			if(arr[i]<avg)
			ans+=avg-arr[i];
		cout<<ans<<"\n";
	}
	return 0;
}
