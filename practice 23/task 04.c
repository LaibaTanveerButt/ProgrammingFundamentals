#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
int main()
{
	srand(time(0));
	int x[SIZE],y[SIZE],z[10],i,j,temp=0;
	printf("X: ");
	for(i=0;i<SIZE;i++)
	{
		x[i]=rand()%19+1;
		printf("%d ",x[i]);
	}
	printf("\n");
	printf("Y: ");
	for(i=0;i<SIZE;i++)
	{
		y[i]=rand()%19+1;
		printf("%d ",y[i]);
	}
	printf("\n");
	
	
	printf("Z: ");
	for(i=0;i<SIZE;i++)
	   z[i]=x[i];
	for(i=0;i<SIZE;i++)
	   z[i+5]=y[i];
	   for(i=0;i<10;i++)
	{
		printf("%d ",z[i]);
	}
	   
	printf("\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
	{

		if(z[i]>z[j])
		{
		temp=z[i];
		z[i]=z[j];
		z[j]=temp;
	   }
          }
	}
	printf("SORTED ARRAY Z:");
	for(i=0;i<10;i++)
	{
		printf("%d ",z[i]);
	}
	printf("\n");
}
