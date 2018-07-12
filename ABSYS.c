#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int str(char arr[])
{
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	if(arr[i]=='m')
	return 1;
	return 0;
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		char s1[100],s2[100],s3[100];
		scanf("%[^ ] + %[^ ] = %[^\n]",s1,s2,s3);
		//cout<<s1<<endl;
		//cout<<s2<<endl;
		//cout<<s3<<endl;
		int x=atoi(s1);
		int y=atoi(s2);
		int z=atoi(s3);
		int ans=z-(y+x);
		if(ans<0)
		{
			cout<<x<<" + "<<y<<" = "<<x+y<<endl;
		}
		else{
			if(str(s1)==1)
			{
				cout<<z-y<<" + "<<y<<" = "<<z<<endl;
			}
			else cout<<x<<" + "<<z-x<<" = "<<z<<endl;
		}
	}
	return 0;
}
