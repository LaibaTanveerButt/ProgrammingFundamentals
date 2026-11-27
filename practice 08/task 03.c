#include<stdio.h>
int main()
{
	char c1,c2;
	printf("enter character:");
	scanf("%c\n%c",&c1,&c2);
	if((c1&1)==(c2&1) && (c1&2)==(c2&2) && (c1&4)==(c2&4) && (c1&8)==(c2&8) && (c1&16)==(c2&16) && (c1&32)==(c2&32) && (c1&64)==(c2&64) && (c1&128)==(c2&128))
	printf("Both characters \'%c\' and \'%c\' are same.",c1,c2);
	else
	printf("both characters \'%c\' and \'%c\' are different.",c1,c2);
}

