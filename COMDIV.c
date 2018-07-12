#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(a==b)
	return a;
        int X,Y,rem,ans,temp;
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
	int t,a,b,g;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		g=gcd(a,b);int count=1;
		if(a==b)
		{ g=a/2;count++; }
		int i=(a%2==1 || b%2==1)? 3:2;
		int k=(a%2==1 || b%2==1)? 2:1;
		for(;i<=g;i+=k)
		{
			if(a%i==0 && b%i==0)
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
