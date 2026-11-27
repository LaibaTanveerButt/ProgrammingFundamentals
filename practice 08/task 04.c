#include<stdio.h>
int main()
{
	char c;
	int bit;
	printf("enter character:");
	scanf("%c",&c);
	printf("enter bit :");
	scanf("%d",&bit);
	if(bit==1)
	{
	if(c&1)
	printf("1st bit is on in %c",c);
	else
	printf("1st bit is off in %c",c);
    }
    if(bit==2)
	{
	if(c&2)
	printf("2nd bit is on in %c",c);
	else
	printf("2nd bit is off in %c",c);
    }
    if(bit==3)
	{
	if(c&4)
	printf("3rd bit is on in %c",c);
	else
	printf("3rd bit is off in %c",c);
    }
    if(bit==4)
	{
	if(c&8)
	printf("4th bit is on in %c",c);
	else
	printf("4th bit is off in %c",c);
    }
    if(bit==5)
	{
	if(c&16)
	printf("5th bit is on in %c",c);
	else
	printf("5th bit is off in %c",c);
    }
    if(bit==6)
	{
	if(c&32)
	printf("6th bit is on in %c",c);
	else
	printf("6th bit is off in %c",c);
    }
    if(bit==7)
	{
	if(c&64)
	printf("7th bit is on in %c",c);
	else
	printf("7th bit is off in %c",c);
    }
    if(bit==8)
	{
	if(c&128)
	printf("8th bit is on in %c",c);
	else
	printf("8th bit is off in %c",c);
    }
}
