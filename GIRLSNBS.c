#include<bits/stdc++.h>
using namespace std;

int main()
{
	int g,b;
	while(1)
	{
		cin>>g>>b;
		if(g==-1 && b==-1)
		break;
		else if(g==0 || b==0)
		cout<<g+b<<"\n";
		else if(g==b)
		cout<<"1\n";
		else{
			int ans=(max(g,b)-1)/(min(g,b)+1);
			cout<<ans+1<<"\n";
		}
	}
	return 0;
}
