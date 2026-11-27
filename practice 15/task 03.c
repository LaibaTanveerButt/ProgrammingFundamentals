#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i,j,count,x,y,z,avg,sum=0,maxavg=0;
	for(i=1;i<=10;i++)
	{
			x=rand()%899+100;
			y=rand()%899+100;
			z=rand()%899+100;
			printf("%d\t%d\t%d",x,y,z);
	    	avg=(x+y+z)/3;
	    	printf("\taverage of the set is :%d",avg);
		   if(avg>=maxavg)
		    {
			maxavg=avg;
			count=i;
		    }
		  printf("\n");
	}
	printf("\nset %d has higest avg :%d",count,maxavg);
}
