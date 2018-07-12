#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	int arr[10000]={0};
	int a[10000];
	int t=n,temp,count=0,p=0;
	while(t--)
	{
		cin>>temp;
		arr[temp]=1;
		cin>>m;
		while(m--)
		{
			cin>>a[p++];
		}
	}
	for(int i=0;i<p;i++)
	{
		if(arr[a[i]]==0)
		{ count++;arr[a[i]]=1; }
	}
	cout<<count<<endl;
	return 0;
}
