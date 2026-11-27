#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	char c1,c2;
	int i,count=0;
	for(i=1;i<=10;i++)
	{
		count=0;
		c1=rand()%255;
		c2=rand()%255;
		printf("%c  %c\n",c1,c2);
		if((c1&1) == (c2&1))
		{
			printf("1st bit is same\n");
			count++;
		}
		if((c1&2) == (c2&2))
		{
			printf("2nd bit is same\n");
			count++;
		}
		if((c1&4) == (c2&4))
		{
			printf("3rd bit is same\n");
			count++;
		}
		if((c1&8) == (c2&8))
		{
			printf("4th bit is same\n");
			count++;
		}
		if((c1&16) == (c2&16))
		{
			printf("5th bit is same\n");
			count++;
		}
		if((c1&32) == (c2&32))
		{
			printf("6th bit is same\n");
			count++;
		}
		if((c1&64) == (c2&64))
		{
			printf("7th bit is same\n");
			count++;
		}
		if((c1&128) == (c2&128))
		{
			printf("8th bit is same\n");
			count++;
		}
		printf("total number of similar bits are:%d\n",count);
	}
	printf("\n");
}
