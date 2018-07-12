#include<bits/stdc++.h>
using namespace std;

void print(long long int sum,long long int pos,long long int n)
{
	int x=(sum%2==0)?sum-1:1;
	if(x==sum-1)
	x=x-(pos-1);
	else x=x+pos-1;
	int y=sum-x;
	cout<<"TERM "<<n<<" IS "<<x<<"/"<<y<<endl;
}

int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int sum=0,i;
		for(i=1;i<=n;i++)
		{
			sum=((i)*(i+1))/2;
			if(sum>=n)
			break;
		}
		long long int pos=i-(sum-n);
		print(i+1,pos,n);
	}
	return 0;
}
