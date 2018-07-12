#include<stdio.h>
#include<stdio.h>

int comparator(const void *p, const void *q)
{
    int l = *(const int *)p;
    int r = *(const int *)q;
    if ((l&1) && (r&1))
        return (l-r);
    if ( !(l&1) && !(r&1) )
        return (r-l);
    if (!(l&1))
        return 1;
    return -1;
}

void findNo(int arr[],int size,int w,int lo,int* count)
{
	if(lo>=size)
	{ *count=0 ;return ;}
	if(arr[lo]>w)
	findNo(arr,size,w,lo+1,count);
	if(arr[lo]==w)
	{ *count++;return ; }
	*count++;
	findNo(arr,size,w-arr[lo],lo+1,count);
}

void printSubsets(int arr[],int n,int w)
{
	int** dp=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	{ dp[i]=(int*)malloc((w+1)*sizeof(int));
	  dp[i][0]=0; }
	if(arr[0]<=sum)
	dp[0][arr[0]]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=sum;j++)
		dp[i][j]=(arr[i]<=j)? OR(dp[i-1][j],dp[i-1][j-arr[i]]):dp[i-1][j];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,w;
		scanf("%d %d",&n,&w);
		int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		printSubsets(arr,n,w);
	}
	return 0;
}
