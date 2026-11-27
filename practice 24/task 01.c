#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5
int main()
{
	srand(time(0));
	int i,j,k,x[5][8],count=0,sumR=0,sumC=0,maxR,maxC,maxER,maxEC;
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		{
		x[i][j]=rand()%89+10;
		printf("%d ",x[i][j]);
	   }
	   printf("\n");
	}
	maxER=x[0][0];
	maxEC=x[0][0];
	printf("\n Row wise sum:\n");
	for(i=0;i<5;i++)
	{
		sumR=0;
		printf("Sum of row %d: ",i+1);
		for(j=0;j<8;j++)
		sumR+=x[i][j];
		printf("%d ",sumR);
		printf("\n");
	}
	printf("\n Column wise sum:\n");
	for(j=0;j<8;j++)
	{
		printf("Sum of column %d is: ",j+1);
		sumC=0;
		for(i=0;i<5;i++)
		sumC+=x[i][j];
		printf("%d ",sumC);
		printf("\n");
	}
	printf("\n Max of each row:\n");
	for(i=0,k=0;i<5;i++)
	{
		maxR=x[i][k];
		printf("Max of row %d is: ",i+1);
		for(j=0;j<8;j++)
		{
		if(x[i][j]>maxR)
		maxR=x[i][j];
		maxER=maxR;
	    }
	    printf("%d",maxR);
	    printf("\n");
	}
	printf("\nMax of each column:\n");
	for(j=0,k=0;j<8;j++)
	{
		maxC=x[k][j];
		printf("Max of column %d is: ",j+1);
		for(i=0;i<5;i++)
		{
			if(x[i][j]>=maxC)
			maxC=x[i][j];
			maxEC=maxC;
		}
		printf("%d",maxC);
		printf("\n");
	}
	printf("Row of 2D with max element:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		{
		 if(x[i][j]>maxER)
		  {
		 maxER=x[i][j];
		 count=i;
	      }
	    }
	}
	printf("the row of 2D is %d has max element %d\n",count+1,maxER);
		for(i=count,j=0;j<8;j++)
		printf("%d ",x[i][j]);
    	printf("\n");
    printf("Column of 2D with the max element:");
    count=0;
    for(j=0;j<8;j++)
    {
    	for(i=0;i<4;i++)
    	{
    		if(x[i][j]>=maxEC)
    		{
    			maxEC=x[i][j];
    			count=j;
			}
		}
	}
	printf("the column of 2D is %d with max element %d\n",count+1,maxEC);
	for(i=0,j=count;i<5;i++)
	printf("%d\n",x[i][j]);
}
