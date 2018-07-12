#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min(int x,int y)
{
	return x<=y ? x:y ;
}

int main()
{
	int t;//printf("kdkm");
	scanf("%d",&t);
	while(t--)
	{
		char* A=(char*)malloc(2001*sizeof(char));
		char* B=(char*)malloc(2001*sizeof(char));
		scanf("%s",A);
		scanf("%s",B);
		int a=strlen(A);
		int b=strlen(B);
		int arr[2001][2001]={0};
		for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
		if(i==0)
		arr[i][j]=j;
		else if(j==0)
		arr[i][j]=i;
		else if(A[i-1]==B[j-1])
			arr[i][j]=arr[i-1][j-1];
		else arr[i][j]=1+min(arr[i][j-1],min(arr[i-1][j-1],arr[i-1][j]));
		}
		}
		printf("%d\n",arr[a][b]);
	}
	return 0;
}
