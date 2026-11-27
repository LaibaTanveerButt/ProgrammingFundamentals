#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5
int main()
{
	srand(time(0));
	int x[4][6],y[4][6],i,j,k,l,m,n,r,c,count,occ,isDistinct=1;
	for(i=0;i<4;i++)
	{
	  for(j=0;j<6;j++)
	  {
	  x[i][j]=rand()%8+1;
	  printf("%d ",x[i][j]);
	  }
	  printf("\n");
   }
   for(i=0;i<4;i++)
   {
   	for(j=0;j<6;j++)
   	{
   		isDistinct=1;
   		for(k=0;k,4;k++)
   		{
   			for(l=0;l<k;l++)
   			{
   				if(x[i][j]==x[k][l])
   				{
   					isDistinct=0;
   					break;
			    }
			}
		}
	  }
	  if(isDistinct==1)
	  {
	  	y[m][n]=x[i][j];
	  	n++;
	  	count++;
	  }  
   }
   for(i=0;i<4;i++)
   for(j=0;j<count;j++)
   {
   printf("%d ",x[i][j]);
   printf("\n");
  }
}
