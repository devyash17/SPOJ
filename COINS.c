#include<bits/stdc++.h>
using namespace std;

long long int coin(long long int n,long long int arr[])
{
	if(n<=1000000)
	return arr[n];
	return max(coin(n/2,arr)+coin(n/3,arr)+coin(n/4,arr),n);
}

int main()
{
	int n;
	long long int* arr=new long long int[1000001];
	arr[0]=0;
	for(int i=1;i<=1000000;i++)
	arr[i]=max(arr[i/2]+arr[i/3]+arr[i/4],(long long int)i);
	while(cin>>n)
	{
		cout<<coin(n,arr)<<"\n";
	}
	delete[] arr;
	return 0;
}
