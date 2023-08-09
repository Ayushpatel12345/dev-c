#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("\n enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
