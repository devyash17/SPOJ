#include<stdio.h>
#include<stdio.h>

unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
	unsigned long long int X,Y,rem,ans,temp;
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
	unsigned long long int a,b,c;
	scanf("%llu",&a);
	scanf("%llu",&b);
	scanf("%llu",&c);
	unsigned long long int X=gcd(a,b);
	printf("%llu\n",gcd(X,c));
	return 0;
}
