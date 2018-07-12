#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int last(char* arr,int len)
{
	for(int i=0;i<len;i++)
		if(arr[i]!='9')
		return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char* arr=(char*)malloc(sizeof(char)*1000000);
		scanf("%s",arr);
		int len=strlen(arr);int i;
		if(last(arr,len)==1)
		{
			arr=realloc(arr,sizeof(char)*(len+1));
			for(int i=0;i<len+1;i++)
			arr[i]='0';
			arr[0]='1';
			arr[len]='1';
			printf("%s\n",arr);
			continue;
		}
		if(len==1)
		{
			printf("11\n");
			continue;
		}
		if(len==2)
		{
			if(arr[0]=='1' && arr[1]=='0')
			printf("11\n");
			else
			{
				if(arr[0]<=arr[1])
				arr[0]++;
				else arr[1]=arr[0];
				arr[1]=arr[0];
				printf("%s\n",arr);
			}
			continue;
		}
		if(len==3)
		{
			if(arr[0]>arr[2])
				arr[2]=arr[0];
			else{
				if(arr[1]!='9')
				{ arr[1]++;arr[2]=arr[0]; }
				else { arr[0]++;arr[1]='0';arr[2]=arr[0]; }
			}
			printf("%s\n",arr);
			continue;
		}
		for(i=len/2-1;i>=0;i--)
		{
			if(arr[i]!=arr[len-1-i])
			break;
		}
		if(i!=-1)
		{
			if(arr[i]>arr[len-1-i])
			arr[len-1-i]=arr[i];
			else{
				int k;
				for(k=(len-1)/2;k>=0;k--)
                        	{
                                	if(arr[k]=='9')
                                	{ arr[k]='0'; arr[len-1-k]='0'; }
                                	else break;
                        	}
                        arr[k]++;if(len-1-k!=k) arr[len-1-k]++;
			}
			for(int j=i;j>=0;j--)
			arr[len-1-j]=arr[j];
		}
		else{
			int j;
			for(j=(len-1)/2;j>=0;j--)
			{
				if(arr[j]=='9')
				{ arr[j]='0'; arr[len-1-j]='0'; }
				else break;
			}
			arr[j]++;if(len-1-j!=j) arr[len-1-j]++;
		    }
		printf("%s\n",arr);
	}
}
