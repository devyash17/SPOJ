#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,count=0;
		cin>>n;
		int* arr=new int[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		for(int i=n-1;i>=0;i--)
		{
			if(arr[i]==0)
			{ sum+=n-1-count-i;
			count++;}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
