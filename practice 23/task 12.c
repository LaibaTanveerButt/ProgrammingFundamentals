#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i,j,k,x[10],sum=0;
	for(i=0;i<10;i++)
	{
		x[i]=rand()%10;
		printf("%d ",x[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		sum=0;
		for(j=0;j<=i;j++)
		{
			printf("%d ",x[j]);
			sum+=x[j];
		}
		printf("=%d",sum);
		printf("\n");
	}
}
