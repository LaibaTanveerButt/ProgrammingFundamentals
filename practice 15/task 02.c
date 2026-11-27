#include<stdio.h>
int main()
{
	int dec,oct,rev;
	printf("enter decimal number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		oct=dec%8;
		printf("%d",oct);
		dec=dec/8;
	}
	if(dec==0)
	printf("0");
}
