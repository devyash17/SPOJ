#include<stdio.h>
#include<stdlib.h>

int main()
{
	int L;
	while(1)
	{
		scanf("%d",&L);
		if(L==0)
		break;
		double D;
		double pi=3.14159265359;
		D=(L*L)/(2*pi);int D1=(int)D;
		int d=((int)(D*1000))%10;
		if(d>=5)
		printf("%.2lf\n",D);
		else printf("%.2f\n",D);
	}
	return 0;
}
