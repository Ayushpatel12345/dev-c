#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,n,j;
	
	printf("\n enter the value first matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n enter the value second matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n addition of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}					 
	for(i=0;i<2;i++)   
	{				
		for(j=0;j<2;j++)
		{
			printf("\t%d",c[i][j]);
		}
	    printf("\n");
	}
	
	printf("\n\n subtraction of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}					 
	for(i=0;i<2;i++)   
	{				
		for(j=0;j<2;j++)
		{
			printf("\t%d",c[i][j]);
		}
	    printf("\n");
	}
	return 0;	
}
