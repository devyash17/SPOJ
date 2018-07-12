#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2,max=1;
		scanf("%d",&n1);
		int a[n1];
		for(int i=0;i<n1;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&n2);int b[n2];
		for(int i=0;i<n2;i++)
		{
			scanf("%d",&b[i]);
		}
		sort(a,a+n1);
		sort(b,b+n2);
		int p=0,q=0;int min=10000000,d;
		while(p!=n1 && q!=n2)
		{
			d=a[p]-b[q];
			if(d==0)
			{ cout<<"0\n";break; }
			else if(d<0)
			{
				d*=-1;
				if(d<min)
				min=d;
				p++;
			}
			else{
				if(d<min)
				min=d;
				q++;
			}
		}
		if(p==n1 || q==n2) cout<<min<<endl;
	}
	return 0;
}
