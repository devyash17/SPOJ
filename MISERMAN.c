#include<stdio.h>
#include<stdlib.h>

int min(int x,int y)
{
	return (x<y)? x:y;
}

int main()
{
	int m,n,min2=100000;
	scanf("%d %d",&n,&m);
	int arr[101][101]={0};
	for(int i=0;i<n;i++)
	arr[i][0]=arr[i][m+1]=1000;
	for(int i=0;i<n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&arr[i][j]);
	for(int i=1;i<n;i++)
	for(int j=1;j<=m;j++)
	arr[i][j]+=min(arr[i-1][j-1],min(arr[i-1][j],arr[i-1][j+1]));
	for(int j=1;j<=m;j++)
	if(arr[n-1][j]<min2)
	min2=arr[n-1][j];
	printf("%d\n",min2);
	return 0;
}
