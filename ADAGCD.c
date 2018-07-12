#include<stdio.h>
#include<stdlib.h>

long long int gcd(long long int a,long long int b)
{
	if(a==1 || b==1)
	return 1;
	long long int X,Y,rem,ans,temp;
	if(a>=b)
	{ X=a;Y=b; }
	else { X=b;Y=a; }
	rem=Y%X;
	if(rem==0)
	return X;
	ans=X;
	while(rem!=0)
	{
		temp=ans;
		ans=rem;
		rem=temp%rem;
	}
	return ans;
}

int main()
{
	int N;long long int Gcd=1;
	scanf("%d",&N);int flag=0;
	while(N--)
	{
		int M;
		scanf("%d ",&M);
		long long int pro=1,temp;
		for(int i=0;i<M;i++)
		{ scanf("%lld",&temp); pro*=temp; }
		//printf("%lld\n",pro);
		if(flag==0) Gcd=pro; else Gcd=gcd(Gcd,pro);
		flag=1;
	}
	printf("%lld",Gcd%1000000007);
	return 0;
}
