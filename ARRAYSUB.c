#include<stdio.h>
#include<stdlib.h>

int max(int arr[],int lo,int hi)
{
	int max=0;
	for(int i=lo;i<hi+1;i++)
	if(arr[i]>max)
	max=arr[i];
	return max;
}

int main()
{
	int n,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&k);
	for(int i=0;i<=n-k;i++)
	   printf("%d ",max(arr,i,i+k-1));
	return 0;
}
