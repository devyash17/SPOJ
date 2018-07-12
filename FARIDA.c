#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;int p=1;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==0)
		{
			cout<<"Case "<<p<<": 0"<<"\n";
			p++;
			continue;
		}
		int* arr=new int[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		long long int* dp=new long long int[n];
		memset(dp,0,n*sizeof(int));
		dp[0]=arr[0];
		if(n>1) dp[1]=max(arr[0],arr[1]);
		for(int i=2;i<n;i++)
		dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
		cout<<"Case "<<p<<": "<<dp[n-1]<<"\n";
		p++;
		delete[] arr;
		delete[] dp;
	}
	return 0;
}
