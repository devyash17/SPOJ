#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		float sum=0;int N;
		scanf("%d",&N);
		for(int i=1;i<=N;i++)
			sum+=(1/(float)i);
		sum*=N;//printf("%f\n",sum);
		float temp=100*sum;
		int x=(int)temp;//printf("%d\n",x);
		//float ans=(float)(0.01)*(x%100)+(float)(int)(sum);
		temp=1000*sum;
		if(x%100==0)
		{ printf("%d.00\n",(int)sum);continue; }
		if((int)temp%10>=5)
		{
			if(x%100==99)
			printf("%d.00\n",(int)sum+1);
			else if(x%100<9)
			printf("%d.0%d\n",(int)sum,x%100+1);
			else printf("%d.%d\n",(int)sum,x%100+1);
		}
		else
		{	if(x%100==99)
			printf("%d.99\n",(int)sum);
			else if(x%100<10)
			printf("%d.0%d\n",(int)sum,x%100);
			else printf("%d.%d\n",(int)sum,x%100);
		}
	}
	return 0;
}
