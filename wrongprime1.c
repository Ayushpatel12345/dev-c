#include<stdio.h>
int main()
{
	int i,n,a=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			a++;
		}
		if(a==2)
		{
			printf("no is prime");
		}
		else
		{
			printf("no is not prime");
		}
	}
		return 0;
}