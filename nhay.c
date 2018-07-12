#include<stdio.h>
#include<stdlib.h>

int prefix_suffix(char arr[],int size)
{
	return 0;
}

int main()
{
	int len;
	while(1)
	{
		int t;
		if(scanf("%d",&t)!=EOF)
		{
			char arr[t+1];
			scanf("%s",arr);
			//int len=prefix_suffix(arr,t);
			char c;int i=0;int j=0,temp=0;
			while(scanf("%c",&c)!=EOF)
			{
				if(c==arr[i])
				i++;
				if(i==t)
				{
				  printf("%d\n",j+1-t);
				  if(scanf("%c",&c)!=EOF)
				  {
					if(c==arr[len])
					i=len+1;

		}
		else break;
	}
	return 0;
}

