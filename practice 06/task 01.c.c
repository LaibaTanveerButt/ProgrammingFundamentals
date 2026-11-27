#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x,y,diff;
	x=rand()%9+1;
	y=rand()%9+1;
	printf("%d  %d\n",x,y);
	diff=abs(x-y);
	if(x==y)
	printf("numbers are same");
	else if(diff<=1)
	printf("almost equal");
	else
	printf("not equal");
}
