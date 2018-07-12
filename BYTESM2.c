#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,w;
		cin>>h>>w;
		int** arr=new int*[h];
		for(int i=0;i<h;i++)
		{
			arr[i]=new int[w+2];
			arr[i][0]=-1;arr[i][w+1]=-1;
			for(int j=1;j<=w;j++)
			cin>>arr[i][j];
		}
		for(int i=1;i<h;i++){
		for(int j=1;j<=w;j++){
		arr[i][j]+=max(arr[i-1][j],max(arr[i-1][j-1],arr[i-1][j+1]));
		}}
		int max=0;
		for(int j=1;j<=w;j++)
		if(arr[h-1][j]>max)
		max=arr[h-1][j];
		cout<<max<<"\n";
	}
	return 0;
}
