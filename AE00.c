#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=i;j<=n;j++)
	if(i*j<=n)
	count++;
	else break;
	cout<<count;
	return 0;
}
