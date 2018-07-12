#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int fillArr(int arr[],string str,int lo,int hi)
{
	int seed=131;
	unsigned long hash=0;
	for(int i=lo;i<=hi;i++)
	hash=hash*seed+str[i];
	int index=hash%501;
	if(arr[index]==0)
	{ arr[index]=1;return 1; }
	return 0;
}

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		int N,K;
		cin>>N>>K;
		string str;
		cin>>str;
		int arr[501]={0};//=new int(501);
		//for(int i=0;i<501;i++)
		//arr[i]=0;
		int count=0;
		for(int i=0;i<=N-K;i++)
		count+=fillArr(arr,str,i,i+K-1);
		cout<<count<<"\n";
//		delete[] arr;
	}
	return 0;
}
