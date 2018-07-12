#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z;
	while(1)
	{
		cin>>x>>y>>z;
		if(x==0 && y==0 && z==0)
		break;
		if(y-x==z-y)
		{
			int ans=z+y-x;
			cout<<"AP "<<ans<<"\n";
		}
		else {
			int ans=z*y/x;
			cout<<"GP "<<ans<<"\n";
		}
	}
	return 0;
}
