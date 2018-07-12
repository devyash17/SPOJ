#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%10==0)
	cout<<"2\n";
	else{
		cout<<"1\n";
		cout<<n%10<<"\n";
	}
	return 0;
}
