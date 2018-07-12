#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int non(int arr[])
{
	int i;
	for(i=399;i>=0;i--)
	if(arr[i]!=0)
	return i;
	return -1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char A[400],B[400];int C[400];
		for(int i=0;i<400;i++)
		 { A[i]=B[i]='0';C[i]=0;}
		scanf("%s %s",A,B);
		int x,y;
		x=strlen(A);y=strlen(B);
		A[x]=B[y]='0';
		if(x==1 && y==1 && A[0]=='0' && B[0]=='0')
		{ printf("0\n"); continue; }
		int carry=0,sum=0,flag=0;
		for(int i=0;i<400;i++)
		{
			sum=A[i]+B[i]+carry-96;
			if(sum>=10)
			{ carry=1; sum=sum%10; }
			else carry=0;
			C[i]=sum;
			//if(carry==0 && sum==0)
			//break;
			//if(sum==0 && flag==0) continue;
			//else { printf("%d",sum);flag=1; }
		}
		int index=non(C);
		for(int i=0;i<=index;i++)
		if(flag==0 && C[i]==0)
		continue;
		else { printf("%d",C[i]);flag=1; }
		 printf("\n");
	}
	return 0;
}
