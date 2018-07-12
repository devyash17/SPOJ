#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,sum=0;
	cin>>n>>m;
	int arr[n],ans[n];
	for(int i=0;i<n;i++)
	{ cin>>arr[i];sum+=arr[i]; }
	if(sum<=m)
	{ cout<<sum<<endl;return 0; }
	long long int max=-1,prev=-1;sum=0;
	int l=0,h=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum>m)
		{
			if(max<sum-arr[i] && sum-arr[i]<=m)
			max=sum-arr[i];
			while(sum>m && l<n)
			sum-=arr[l++];
		}
		if(sum==m)
		{ cout<<m<<endl;return 0; }
		if(sum<=m && sum>max)
		max=sum;
	}
	cout<<max<<endl;
	return 0;
}
