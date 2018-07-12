#include<bits/stdc++.h>
using namespace std;

int diff(char a,char b,int k)
{
	if(a=='-' || b=='-')
	return k;
	return (a>b)? a-b:b-a;
}

int main()
{
	char* a=new char[2001];
	char* b=new char[2001];
	cin>>a;
	cin>>b;
	int k;
	cin>>k;
	int l1=strlen(a),l2=strlen(b);
	int** dp=new int*[2001];
	for(int i=0;i<2001;i++)
	{
		dp[i]=new int[2001];
		dp[i][0]=dp[0][i]=i*k;
	}
	for(int i=1;i<=l1;i++)
		for(int j=1;j<=l2;j++)
			dp[i][j]=min(min(diff(a[i-1],b[j-1],k)+dp[i-1][j-1],k+dp[i-1][j]),k+dp[i][j-1]);
	cout<<dp[l1][l2]<<endl;
	return 0;
}
