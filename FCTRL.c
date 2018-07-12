#include<stdio.h>
#include<stdlib.h>

int count(int n,int p)
{
	int ans=0;
	while(n>0)
	{
		if(n%p==0)
		{ ans++;n=n/p; }
		else break;
	}
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int x=0,y=0;
		for(int i=5;i<=n;i=i*5)
		y+=n/i;
		printf("%d\n",y);
	}
	return 0;
}
