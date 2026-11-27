#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
	srand(time(0));
	int x[SIZE],i,j,sum=0;
	for(i=0;i<SIZE;i++)
	{
		x[i]=rand()%10+10;
		sum+=x[i];
		printf("%d ",x[i]);
	}
	printf("\n");
	printf("SUM IS : %d",sum);
}
