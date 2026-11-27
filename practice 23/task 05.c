#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
	srand(time(0));
	int x[SIZE],i,j,countE=0,countO=0;
	printf("Array is :");
	for(i=0;i<SIZE;i++)
	{
	    x[i]=rand()%100;
	    printf("%d ",x[i]);
	}
	printf("\n");
	printf("Even elements are: ");
	for(i=0;i<SIZE;i++)
	{
	    if(x[i]%2==0)
	    {
	    printf("%d ",x[i]);
	    countE++;
	    }
	}
	printf("\n");
	printf("Odd elements are: ");
	for(i=0;i<SIZE;i++)
	{
	    if(x[i]%2!=0)
	    {
	    printf("%d ",x[i]);
	    countO++;
	    }
	}
	printf("\n");
	if(countE>countO)
	{
		for(i=0;i<SIZE;i++)
		{
			if(x[i]%2==0)
	    	printf("%d ",x[i]);
	    	else
		    printf("%d ",x[i]+1);
		}
	}
		else
		{
			for(i=0;i<SIZE;i++)
		{
			if(x[i]%2==0)
	    	printf("%d ",x[i]-1);
	    	else
		    printf("%d ",x[i]);
		}
	}
}
	
