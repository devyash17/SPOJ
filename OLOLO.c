#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int x=0,temp;
	for(int i=0;i<n;i++)
	{ scanf("%d",&temp);x=x^temp; }
	printf("%d\n",x);
	return 0;
}
