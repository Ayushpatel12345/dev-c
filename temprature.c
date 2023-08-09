#include<stdio.h>
int main()
{
	float temp_f,temp_c;
	char text[50];
	printf("input the temprature centigrade");
	fgets(text,sizeof(text),stdin);
	sscanf(text,"%f",&temp_c);
	temp_f=((9.0/5.0))*temp_c)+32.0;
	printf("%f degrees fahreint.\n",temp_f);
	return 0;
}
