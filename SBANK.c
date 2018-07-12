#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string arr[n+2];
		for(int i=0;i<n+1;i++)
		getline(cin,arr[i]);
		sort(arr+1,arr+n+1);
		int p=1;
		for(int i=1;i<=n;i++)
		{
			if(arr[i]!=arr[i+1])
			{ cout<<arr[i]<<" "<<p<<endl; p=1; }
			else p++;
		}
		cout<<endl;
	}
	return 0;
}
