#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	while(1)
	{
		int c;
		scanf("%d",&c);
		if(c==0) break;
		char arr[201];
		scanf("%s",arr);
		int r=strlen(arr)/c,p=0;
		char temp[r][c];
		for(int i=0;i<r;i++)
		{
			int j=(i%2==0)? 0:c-1;
			if(j==0)
			for(;j<c;j++)
			temp[i][j]=arr[p++];
			else for(;j>=0;j--)
			temp[i][j]=arr[p++];
		}
		for(int i=0;i<c;i++)
		for(int j=0;j<r;j++)
		printf("%c",temp[j][i]);
		printf("\n");
	}
	return 0;
}
