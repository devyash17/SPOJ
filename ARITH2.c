#include<bits/stdc++.h>
using namespace std;

long long int op(long long int a,long long int b,char c)
{
	long long int res;
	if(c=='+')
	res=a+b;
	else if(c=='-')
	res=a-b;
	else if(c=='*')
	res=a*b;
	else res=a/b;
	return res;
}

int main()
{
	long long int t,a,b;
	char c;
	cin>>t;
	while(t--)
	{
		//scanf("%lld %c %lld",&a,&c,&b);
		cin>>a>>c;
		if(c!='=')
		cin>>b;
		else { cout<<a<<endl;continue; }
		long long int res=op(a,b,c);
		while(1)
		{
			cin>>c;
			if(c!='=') cin>>b;
			else break;
			res=op(res,b,c);
		//	scanf(" %c %lld",&c,&b);
		}
		cout<<res<<endl;
	}
	return 0;
}
