#include<stdio.h>
int main()
{
	char c1,c2;
	int count=0;
	printf("enter character:");
	scanf("%c\n%c",&c1,&c2);
	if((c1&1)==(c2&1))
	count++;
	if((c1&2)==(c2&2))
	count++;
	if((c1&4)==(c2&4))
	count++;
	if((c1&8)==(c2&8))
	count++;
	if((c1&16)==(c2&16))
	count++;
	if((c1&32)==(c2&32))
	count++;
	if((c1&64)==(c2&64))
	count++;
	if((c1&128)==(c2&128))
	count++;
	printf("In %c and %c %d bits are same.",c1,c2,count);
}
