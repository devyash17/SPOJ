#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,g,m;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		cin>>g>>m;
		int a[g],b[m];
		for(int i=0;i<g;i++)
		cin>>a[i];
		for(int i=0;i<m;i++)
		cin>>b[i];
		sort(a,a+g);
		sort(b,b+m);
		if(a[g-1]>=b[m-1])
		cout<<"Godzilla"<<endl;
		else
		cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}
