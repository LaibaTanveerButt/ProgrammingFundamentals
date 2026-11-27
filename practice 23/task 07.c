#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
	srand(time(0));
	int i,j,x[SIZE],count,k,y[SIZE],isRepeat=0;
	for(i=0;i<SIZE;i++)
	{
		x[i]=rand()%4+1;
		printf("%d ",x[i]);
	}
	printf("\n\n");
	for(i=0;i<SIZE;i++)
	{
		isRepeat=0;
		for(k=0;k<i;k++)
			{
				if(x[i]==x[k])
				isRepeat=1;
			}
			if(isRepeat==0)
			{
				printf("%d,",i);
		for(j=i+1;j<10;j++)
		{
			if(x[i]==x[j])
			   printf("%d ",j);
		}
	        }
	        printf("\n");
	}	
}
