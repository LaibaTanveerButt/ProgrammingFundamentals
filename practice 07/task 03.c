#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x1,x2,x3,x4;
	int temp;
	x1=rand()%1000;
	x2=rand()%1000;
	x3=rand()%1000;
	x4=rand()%1000;
	printf("%d %d %d %d\n",x1,x2,x3,x4);
	if(x1<x2 && x1<x3)
	{
		if(x1<x4 && x2<x3)
		{
		    if(x3<x4)
		    printf("numbers are in order");
		    else
		    printf("numbers are not in order");
		}
		else
		printf("numbers are not in order");
	}
	else
	printf("numbers are not in order");
}
