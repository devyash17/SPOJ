#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[k];
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
			if(a[i]==-1)
			a[i]=100001;
		}
		int dp[k+1];
		dp[0]=0;
		dp[1]=a[0];
		for(int i=2;i<=k;i++)
		{
			int min=100001;
			for(int j=1;j<=i/2;j++)
			if(dp[i-j]+dp[j]<min)
			min=dp[i-j]+dp[j];
			if(a[i-1]<min)
			min=a[i-1];
			dp[i]=min;
		}
		if(dp[k]>100000)
		cout<<"-1\n";
		else cout<<dp[k]<<endl;
	}
	return 0;
}
