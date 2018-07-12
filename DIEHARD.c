#include<bits/stdc++.h>
using namespace std;

int dp[1010][1010];

int solve(int h,int a,int count,int b)
{
	if(h<=0 || a<=0)
	return count;
	if(dp[h][a]!=-1)
	return dp[h][a];
	(count)++;
//	cout<<*count<<endl;
	if(b==1)
	{
		dp[h][a]=max(dp[h][a],solve(h+3,a+2,count,0));
	}
	return dp[h][a]=max(dp[h][a],max(solve(h-5,a-10,count,1),solve(h-20,a+5,count,1)));
}

int main()
{
	int t,h,a;
	cin>>t;
	while(t--)
	{
		cin>>h>>a;
		memset(dp,-1,sizeof dp);
		int count=-1;
		count=solve(h,a,count,1);
		cout<<count<<endl;
	}
	return 0;
}
