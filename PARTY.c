#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int maxFun(int cost[],int fun[],int b,int n,int C[])
{
	int dp[n+1][b+1];
	for(int i=0;i<=n;i++){
	for(int j=0;j<=b;j++){
	if(i==0 || j==0)
	dp[i][j]=0;
	else if(cost[i-1]<=j)
	dp[i][j]=max(dp[i-1][j],fun[i-1]+dp[i-1][j-cost[i-1]]);
	else dp[i][j]=dp[i-1][j];
	}
	}
	for(int j=0;j<=b;j++)
	if(dp[n][j]==dp[n][b])
	{ C[0]=j;break; }
	return dp[n][b];
}

int main()
{
	int b,n;
	while(1)
	{
		cin>>b>>n;
		if(b==0 && n==0)
		break;
		int cost[n];
		int fun[n];
		for(int i=0;i<n;i++)
		scanf("%d %d",&cost[i],&fun[i]);
		int* C=new int[1];
		C[0]=0;
		int F=maxFun(cost,fun,b,n,C);
		cout<<C[0]<<" "<<F<<"\n";
	}
	return 0;
}
