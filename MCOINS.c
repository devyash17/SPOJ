#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,l,m,temp;
	cin>>k>>l>>m;
	int p=min(k,l);
	int q=max(k,l);
	char* arr=new char[1000000];
	for(int i=1;i<p;i++)
		if(i%2==1)
		arr[i]='A';
		else arr[i]='B';
	arr[p]='A';
	arr[q]='A';
	for(int i=p+1;i<1000000;i++)
	{
		if(i==q)
		continue;
		if(arr[i-1]=='B' || arr[i-p]=='B')
		arr[i]='A';
		else if(i-q>0)
		{
			if(arr[i-q]=='B')
			arr[i]='A' ;
			else arr[i]='B';
		}
		else arr[i]='B';
	}
	for(int j=0;j<m;j++)
	{
		cin>>temp;
		if(temp<p)
		{
			char ans=(temp%2==1)?'A':'B';
			cout<<ans;
		}
		else if(temp==k || temp==l || temp==1)
		{
			cout<<'A';
		}
		else
		{
			printf("%c",arr[temp]);
		}
	}
	delete[]arr;
	return 0;
}
