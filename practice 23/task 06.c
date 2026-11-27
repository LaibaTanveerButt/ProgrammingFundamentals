#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15
int main()
{
	srand(time(0));
	int i=0,j,x[SIZE],count=1,isRepeat=0;
	x[i]=rand()%99+1;
	printf("%d ",x[i]);	
	for(i=1; i<SIZE && count<=15; i++)
	{
		isRepeat=0;
		x[i]=rand()%99+1;
	   for(j=0;j<i;j++)
	   {
		if(x[i]==x[j])
		  isRepeat=1;
	   }
	   if(isRepeat==0)
		 {
			printf("%d ",x[i]);
			count++;
		 }
    }
}
