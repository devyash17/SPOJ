#include<bits/stdc++.h>
using namespace std;

int fun(char str[],int i,int j)
{
	int x,y;
	if(str[i+1]=='T' && str[i+2]=='T')
	y=0;
	else if(str[i+1]=='T' && str[i+2]=='H')
	y=1;
	else if(str[i+1]=='H' && str[i+2]=='T')
	y=2;
	else
	y=3;
	if(str[i]=='T')
	x=0;
	else x=4;
	return x+y;
} 
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char str[40];
		for(int i=0;i<40;i++)
		cin>>str[i];
		int arr[8]={0};
		for(int i=0;i<=37;i++)
		arr[fun(str,i,i+2)]++;
		cout<<n<<" ";
		for(int i=0;i<8;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
