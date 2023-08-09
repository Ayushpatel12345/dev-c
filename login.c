#include<stdio.h>
#include<string.h>
int main()
{
	char u[200]="abc@gmail.com",p[200]="12345";
	char u1[200],p1[200];
	
	printf("enter username:");
	scanf("%s",&u1);
	printf("enter password:");
	scanf("%s",&p1);
	
	if(strcmp(u,u1)==0 && strcmp(p,p1)==0)
	{
		printf("\n login sucessful");
	}
	else
	{
		printf("\n not login sucessful");
	}
	return 0;
}
