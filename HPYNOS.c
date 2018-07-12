#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fillArr(int arr[],int n)
{
	//for(int i=0;i<10;i++)
	//arr[i]=0;
	memset(arr,0,10*sizeof(int));
	int temp=10,i=0;
	while(n>0)
	{
		arr[i]=n%temp;
		n=n/temp;
		i++;
	}
}

int calcSum(int arr[])
{
	int sum=0;
	for(int i=0;i<10;i++)
	sum+=arr[i]*arr[i];
	return sum;
}

int match(int sum[],int temp,int size)  //it checks if temp is already there in sum[]
{
	if(size==0)
	return 0;
	for(int i=0;i<size;i++)
	if(sum[i]==temp)
	return 1;
	return 0;
}

int main()
{
	int n,t;
	scanf("%d",&n);
	int temp=n,ans=1;
	int arr[10]={0};
	int sum[50000];   //it will store all the previosuly calculated values.
	int index=0;
	while(1)
	{
		fillArr(arr,temp);
		temp=calcSum(arr);
		if(temp==1)
		break;
		if(match(sum,temp,index)==1)
		{ printf("-1\n");return 0; }
		sum[index++]=temp;
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}
