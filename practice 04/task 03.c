#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int n1,n2,n3;
	n1=rand()%10+1;
	n2=rand()%10+1;
	n3=rand()%10+1;
	printf("numbers are :%d %d %d\n",n1,n2,n3);
	if((n2-n1)==2 && (n3-n2)==2)
	printf("ok");
	else
	printf("sorry");
}
