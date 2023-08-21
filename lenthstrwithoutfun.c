#include<stdio.h>
int main()
{
	char s[100];
	int i,length=0;
	printf("\n enter string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		length++;
	}
	printf("\nlength of string:%d",length);
}