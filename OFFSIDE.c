#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a,d;
		cin>>a>>d;
		if(a==0 && d==0)
		break;
		int b[a];
		int c[d];
		for(int i=0;i<a;i++)
		cin>>b[i];
		for(int i=0;i<d;i++)
		cin>>c[i];
		sort(b,b+a);
		sort(c,c+d);
		int x=b[0];
		int y=c[0];
		int z=c[1];
		if(x<z)
		cout<<"Y\n";
		else cout<<"N\n";
	}
	return 0;
}
