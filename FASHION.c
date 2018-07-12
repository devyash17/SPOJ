#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		int N,sum=0;
		cin>>N;
		int a[N],b[N];
		for(int i=0;i<N;i++)
		cin>>a[i];
		for(int i=0;i<N;i++)
		cin>>b[i];
		sort(a,a+N);
		sort(b,b+N);
		for(int i=0;i<N;i++)
		sum+=a[i]*b[i];
		cout<<sum<<endl;
	}
	return 0;
}

