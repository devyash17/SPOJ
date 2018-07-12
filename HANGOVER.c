#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		float c;
		cin>>c;
		if(c==0.00)
		break;
		int count=0;
		float sum=0;
		for(int i=2;i<500;i++)
		{
			count++;
			sum+=1/float(i);
			if(sum>=c)
			break;
		}
		cout<<count<<" card(s)\n";
	}
	return 0;
}
