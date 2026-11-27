#include<stdio.h>
int main()
{
	char c1[20]="my name",c2[30]="we are humans",c3[50];
	printf("%s\n",c1);
	printf("%s\n",c2);
	c3[50]=c1+c2;
	printf("%s",c3);
	
}
