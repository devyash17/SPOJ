#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int p,q;
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d/%d",&p,&q);
		if(q==2)
		y++;
		else if(p==1)
		x++;
		else z++;
	}
	int ans=0;
	ans+=z;
	x=(x<z)?0:x-z;
	ans+=y/2;
	y=y%2;
	if(y==1)
	{
		if(x<=2)
		ans++;
		else{
			ans=ans+1;
			x-=2;
			ans+=x/4;
			if(x%4!=0) ans++;
		}
	}
	else{
		ans+=x/4;
		if(x%4!=0) ans++;
	}
	cout<<ans+1<<endl;
	return 0;
}
