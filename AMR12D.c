#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
x:	while(t--)
	{
		char arr[11];
		scanf("%s",arr);
		int len=strlen(arr);
		if(len==1)
		{ printf("YES\n");continue; }
		for(int i=len/2-1;i>=0;i--)
		if(arr[i]!=arr[len-1-i])
		{ printf("NO\n") ; goto x; }
		printf("YES\n");
	}
	return 0;
}
