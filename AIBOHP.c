#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	long long int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int n=s.length();
		int** dp=new int*[n];
		for(int i=0;i<n;i++)
		{
			dp[i]=new int[n];
			memset(dp[i],0,n*sizeof(int));
		}
		for(int d=1;d<n;d++)
		{
			for(int i=0,j=i+d;j<n;i++,j++)
				if(s[i]==s[j])
				dp[i][j]=dp[i+1][j-1];
				else dp[i][j]=1+min(dp[i+1][j],dp[i][j-1]);
		}
		cout<<dp[0][n-1]<<"\n";
	}
	return 0;
}
