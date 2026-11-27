#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 30
int main()
{
	srand(time(0));
	float avg,sub;
	int sum=0,countN=0,countP=0;
	int i,j,a[SIZE];
	for(i=0;i<SIZE;i++)
	{
		a[i]=rand()%99+1;
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("marks of pass students: ");
	for(i=0;i<SIZE;i++)
	{
		if(a[i]>50)
		printf("%d ",a[i]);
		sum+=a[i];
	}
    	printf("\n");
	  avg=sum*1.0/SIZE;
	  printf("average of pass students are: %f",avg);
	  	printf("\n");
	  printf("marks of fail students: ");	
	  for(i=0;i<SIZE;i++)
	{
		if(a[i]<50)
		printf("%d ",a[i]);
	}
    	printf("\n");
	printf("marks of student above average: ");
	for(i=0;i<SIZE;i++)
	{
		if(a[i]>avg)
		printf("%d ",a[i]);
	}
    	printf("\n");
    printf("marks of student below average: ");
	for(i=0;i<SIZE;i++)
	{
		if(a[i]<avg)
		printf("%d ",a[i]);
	}
    	printf("\n");
}
	
