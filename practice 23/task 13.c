#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int i,j,count=0,x[10];
	for(i=0;i<10;i++)
	{
		x[i]=rand()%10;
		printf("%d ",x[i]);
	}
	printf("\n");
	for(i=0;i<8;i++)
	{
		count=0;
      for(j=i;count<3;j++)
      {
      	if(count<3)
       	{
     	printf("%d ",x[j]);
     	count++;
         }
      }
      printf("\n");
    }
}
