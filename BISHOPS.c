#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		int n=s.length(),carry=0;
		if(n==1 && s[0]-48==1)
		{ cout<<"1\n"; continue; }
		for(int i=n-1;i>=0;i--)
		{
			int a=s[i]-48;
			a=a*2+carry;
			if(a>=10)
			{
				carry=1;
				a=a%10;
			}
			else carry=0;
			s[i]=a+48;
		}
		int d=s[n-1]-48;
		if(carry==1)
		{ s="1"+s;n++; }
		if(d>=2)
		{ s[n-1]-=2;cout<<s<<"\n"; continue; }
		if(d==1)
		s[n-1]=57;
		if(d==0)
		s[n-1]=56;
		for(int i=n-2;i>=0;i--)
		{
			if(s[i]-48!=0)
			{ s[i]--;break; }
			else s[i]=57;
		}
		if(s[0]-48!=0)
		cout<<s<<"\n";
		else{
			 for(int i=1;i<n;i++)
			 cout<<s[i];
			cout<<"\n";
		}
	}
	return 0;
}
