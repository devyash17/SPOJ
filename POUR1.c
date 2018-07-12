#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
        int X,Y,rem,ans,temp;
        if(a>=b)
        { X=a;Y=b; }
        else { X=b;Y=a; }
        rem=Y%X;
        if(rem==0)
        return X;
        ans=X;
        while(rem!=0)
        {
                temp=ans;
                ans=rem;
                rem=temp%rem;
        }
        return ans;
}

int countSteps(int A,int B,int C)
{
	int count=1;  //1st is filled initially.
	int a=A,b=0,pour;
	while(1)
	{
		int pour=min(a,B-b);
		a-=pour;
		b+=pour;
		count++;
		if(a==C || b==C)
		break;
		if(a==0)
		{ a=A;count++; }
		if(b==B)
		{ b=0;count++; }
	}
	return count;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		if(c==a || c==b)
		cout<<"1\n";
		else if(c%gcd(a,b)!=0 || c>a && c>b)
		cout<<"-1\n";
		else if(c==0)
		cout<<"0\n";
		else cout<<min(countSteps(a,b,c),countSteps(b,a,c))<<"\n";
	}
	return 0;
}
