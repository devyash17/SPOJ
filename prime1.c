#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int search(int num,int arr[],int lo,int hi)
{
	if(lo>hi)
	return hi;
	if(lo==hi)
	return lo;
	int mid=(lo+hi)/2;
	if(arr[mid]==num)
	return mid;
	if(arr[mid]<num)
	return search(num,arr,mid+1,hi);
	else search(num,arr,lo,mid-1);
}

void print(int arr[],int m,int n,int size)
{
	if(m<=2)
	printf("2\n");
	int hi=(n%2==0)? n/2-1:n/2;
	for(int i=m/2;i<=hi;i++)
	if(arr[i]==1)
	printf("%d\n",2*i+1);
	printf("\n");
}

int main()
{
	int t,x,y;
	scanf("%d",&t);
	int i=0,max=1000000000;
	int size=(int)((max)+1)/2;
	int* arr=(int*)malloc(size*sizeof(int));
	/*while(j<=max)
	{
		int temp=(int)sqrt((double)j);int k,p=0;
		for(k=arr[p];k<=temp;k=arr[++p])
		if(j%k==0)
		break;
		if(k>temp)
		arr[i++]=j;
		j+=2;
	}*/
	for(int k=0;k<size;k++)
	arr[k]=1;int count=0;
	for(int p=3;p*p<=max;p+=2)
	{
		int ind=(p/2);
		if(arr[ind]==1)
		for(int j=3*p;j<=max;j+=2*p)
		{ arr[j/2]=0; }
	}
	arr[0]=0;
	i=0;
	while(t--)
	{
		scanf("%d %d",&x,&y);
		if(y==1)
		{ printf("\n");i++; continue; }
		print(arr,x,y,size);
		i++;
	}
	return 0;
}
