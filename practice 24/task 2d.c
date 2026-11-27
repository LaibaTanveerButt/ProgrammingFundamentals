#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i,j,x[6][6],k,l,count,y[5];
	int occur;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			x[i][j]=rand()%99+1;
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for(i=0;i<6;i++)
	{
	for(j=0;j<6;j++)
	{
		occur=x[i][j];
		for(k=0;k<6;k++)
		{
			for(l=j+1;l<6;l++)
			{
				if(occur==x[k][l])
				{
				  printf("%d ",x[i][j]);
				  y[i]=x[i][j];
				   break;
				}
			}
		}	
	}	
 }
       printf("\n");
    for(k=0;k<6;k++)
    {
          count=0;
       for(i=0;i<6;i++)
       {
       	for(j=0;j<6;j++)
       	  {
       		if(y[k]==x[i][j])
       		count++;
		  }
	   }
	   printf("\nthe occurance of %d is : %d",y[k],count);
   }
} 
