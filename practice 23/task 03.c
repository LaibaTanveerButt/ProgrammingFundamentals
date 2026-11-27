#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
	srand(time(0));
	int x[SIZE],y[SIZE],i,j,sum=0;
	printf("X: ");
	for(i=0;i<SIZE;i++)
	{
		x[i]=rand()%10+10;
		printf("%d ",x[i]);
		y[i]=x[i];
	}
	printf("\n");
	printf("Y: ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",y[i]);
	}
}
	
	
