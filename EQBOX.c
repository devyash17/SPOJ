#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
	int a,b,x,y;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>x>>y;
		int X=min(x,y);
		int Y=max(x,y);
		double c=sqrt(a*a+b*b+X*X-sqrt(2)*X*(a+b));
//		cout<<c;
		if(Y<c || x<a && y<b || x<b && y<a)
		cout<<"Escape is possible."<<endl;
		else cout<<"Box cannot be dropped."<<endl;
	}
	return 0;
}
