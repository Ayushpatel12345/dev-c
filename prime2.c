#include<stdio.h>
int main()
{
	int i,n,a=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
				printf("number is not prime");
				a=1;
				break;		
		}
	}
	if(a==0)
	printf("\n number is prime");
	return 0;
}