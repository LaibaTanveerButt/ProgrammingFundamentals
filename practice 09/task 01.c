#include<stdio.h>
int main()
{
	char ct;
	printf("enter card type:");
	scanf("%c",&ct);
	if(ct=='D' ||ct=='H')
	printf("card color is red.");
	if(ct=='S' || ct=='C')
	printf("card color is black.");
}
