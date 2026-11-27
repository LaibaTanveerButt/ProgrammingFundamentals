#include<stdio.h>
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	if(ch&1)
	printf("1st bit is on\n");
	if(ch&2)
	printf("2nd bit is on\n");
	if(ch&4)
	printf("3rd bit is on\n");
	if(ch&8)
	printf("4th bit is on\n");
	if(ch&16)
	printf("5th bit is on\n");
	if(ch&32)
	printf("6th bit is on\n");
	if(ch&64)
	printf("7th bit is on\n");
	if(ch&128)
	printf("8th bit is on\n");
}
