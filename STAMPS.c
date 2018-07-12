#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
	long int t,u=1;
	cin>>t;
	while(t--)
	{
		int s,f;
		cin>>s>>f;
		int arr[f];
		for(int i=0;i<f;i++)
		cin>>arr[i];
		cout<<"Scenario #"<<u<<":\n";
		sort(arr,arr+f);
		int count=0;long int sum=0;
		for(int i=f-1;i>=0;i--)
		{
			count++;
			sum+=arr[i];
			if(sum>=s)
			break;
		}
		if(sum>=s)
		cout<<count<<"\n";
		else cout<<"impossible"<<"\n";
		u++;
	}
	return 0;
}

