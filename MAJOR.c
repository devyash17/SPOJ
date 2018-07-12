#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int n,temp,c;
	while(t--)
	{
		scanf("%d",&n);
		int* arr=new int[2001];
		memset(arr,0,2001*4);
		for(int i=0;i<n;i++)
		{ scanf("%d",&temp);arr[temp+1000]++; }
		int i;
		for(i=0;i<2001;i++)
		  if(arr[i]>n/2)
		  {
			printf("YES %d\n",i-1000);
			break;
		   }
		if(i==2001)
		printf("NO\n");
		delete[] arr;
	}
	return 0;
}
