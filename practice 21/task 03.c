#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x,y,count=0;
	do
	{
		x=rand()%49+1;
		y=rand()%49+1;
		count++;
	}while(x+y!=50);
	if(x+y==50)
	printf("%d\t%d\nnumber of times the loop run to make sum 50 is %d",x,y,count);
}
