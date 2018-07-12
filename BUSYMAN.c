#include<bits/stdc++.h>
using namespace std;

struct A
{
	int s;
	int l;
};

bool comp(A x,A y)
{
	return x.l<y.l;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		A arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i].s>>arr[i].l;
		sort(arr,arr+n,comp);
		int count=1;
		A prev=arr[0];
		for(int i=1;i<n;i++)
		{
			//cout<<arr[i].s<<" "<<arr[i].l<<endl;
			if(arr[i].s>=prev.l)
			{ count++;prev=arr[i]; }
		}
		cout<<count<<endl;
	}
	return 0;
}
