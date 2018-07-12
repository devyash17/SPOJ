#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n,int c,int d)
{
	int count=1,pos=arr[0];
	for(int i=1;i<n;i++)
	if(arr[i]-pos>=d)
	{
		count++;
		pos=arr[i];
		if(count==c)
		return 1;
	}
	return 0;
}

int bs(int arr[],int n,int c)
{
	int ans=-1;
	int lo=0;
	int hi=arr[n-1];
	while(hi>lo)
	{
		int mid=(lo+hi)/2;
		if(func(arr,n,c,mid)==1)
		{
			if(mid>ans)
			ans=mid;
			lo=mid+1;
		}
		else hi=mid;
	}
	return ans;
}

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		int n,c;
		scanf("%d %d",&n,&c);
		int* arr=new int[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		sort(arr,arr+n);
		int ans=bs(arr,n,c);
		printf("%d\n",ans);
	}
}
