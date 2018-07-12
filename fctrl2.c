#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[158];
		for(int i=0;i<158;i++)
		arr[i]=0;
		arr[157]=1;
		for(int i=1;i<=n;i++)
		{
			int carry=0;
			for(int j=157;j>=0;j--)
			{
				int pro=i*arr[j];
				arr[j]=(pro+carry)%10;
				carry=(pro+carry)/10;
			}
		}
		int i;
		for(i=0;i<158;i++)
		if(arr[i]==0)
		continue;
		else break;
		for(int j=i;j<158;j++)
		printf("%d",arr[j]);
		printf("\n");
	}
	return 0;
}
