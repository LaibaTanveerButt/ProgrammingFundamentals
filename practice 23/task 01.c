#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
	srand(time(0));
	int x[SIZE],i,j;
	for(i=0;i<SIZE;i++)
	{
		x[i]=rand()%10+10;
		printf("%d ",x[i]);
	}
	printf("\n");
	for(i=SIZE-1;i>=0;i--)
	printf("%d ",x[i]);
}

