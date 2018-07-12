#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x,y;
		scanf("%d %d %d",&n,&x,&y);
		for(int i=x;i<n;i+=x)
		if(i%x==0 && i%y!=0)
		printf("%d ",i);
		printf("\n");
	}
	return 0;
}
