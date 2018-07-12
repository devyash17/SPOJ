#include<bits/stdc++.h>
using namespace std;

int mod(int a,int b)
{
	return (a>b)?a-b:b-a;
}

int main()
{
	int t,k,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		if(k==1)
		{ cout<<"0\n";continue; }
		sort(arr,arr+n);
		if(n==k)
		cout<<arr[n-1]-arr[0]<<endl;
		else{
			int l=0,h=0;
			long long int sum=0,temp,min=arr[k-1]-arr[0];
			//for(int i=0;i<k-1;i++)
			//sum+=arr[k-1]-arr[i];
			for(int i=k-1;i<n;i++)
			{
				//temp=(arr[i]-arr[i-1])*(k)+sum-(arr[i]-arr[l]);
				if(arr[i]-arr[i-k+1]<min)
				min=arr[i]-arr[i-k+1];
			}
			cout<<min<<endl;
		}
	}
	return 0;
}

