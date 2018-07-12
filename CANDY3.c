#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("\n%lld",&n);
		long long int sum=0;long long int temp;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&temp);
			sum+=temp%n;
		}
		if(sum%n==0)
		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
