#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
	double n;
	while(1)
	{
		cin>>n;
		if(n==-1)
		break;
		double d=sqrt(12*n-3);
		if(d!=(int)d)
		cout<<"N\n";
		else{
			int s=(int)d;
			int r1=0,r2=0;
			if((3+s)%6==0)
			r1=(3+s)/6;
			if((3-s)%6==0)
			r2=(3-s)/6;
			if(r1>0 || r2>0)
			cout<<"Y\n";
			else cout<<"N\n";
		}
	}
	return 0;
}
