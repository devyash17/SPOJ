#include<bits/stdc++.h>
using namespace std;

int fillBin(int bin[],int num)
{
	int size=0,temp=0;
	while(num>0)
	{
		if(num%2!=0)
		bin[size++]=temp;
		num/=2;
		temp++;
	}
	return size;
}

void print(int num)
{
	if(num==0)
	{
		printf("0");
		return ;
	}
	if(num==1)
	{
		//printf("2(0)");
		return ;
	}
	if(num==2)
	{
		printf("2");
		return ;
	}
	int bin[20]={0};
	int size=fillBin(bin,num);
	for(int j=size-1;j>=0;j--)
	{
		if(bin[j]==1)
		printf("2");
//		cout<<bin[j]<<endl;
		else{ printf("2(");
		print(bin[j]);
		printf(")"); }
		if(j!=0)
		printf("+");
	}
}

int main()
{
	int arr[]={137, 1315, 73, 136, 255, 1384, 16385};
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<"=";
		print(arr[i]);
		cout<<endl;
	}
	return 0;
}
