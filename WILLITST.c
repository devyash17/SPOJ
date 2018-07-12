#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
	long int n;
	cin>>n;
	long int temp=2;
	while(temp<n)
	temp*=2;
	if(temp==n || n==0 || n==1)
	cout<<"TAK";
	else cout<<"NIE";
	return 0;
}
