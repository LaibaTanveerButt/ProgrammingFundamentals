#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
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
	for(i=0;i<SIZE;i++)
		sum+=a[i];
		avg=sum*1.0/SIZE;
	printf("AVERAGE IS: %f\n",avg);
	printf("Elements after subtraction from avg:  ");
	for(i=0;i<SIZE;i++)
	{
		sub=0;
		sub=avg-a[i];
		printf("%.2f  ",sub);
		if(sub>0)
		countP++;
		else
		countN++;	
	}
	printf("\n");
	printf("number of positive numbers are :%d\nnumber of negative numbers are :%d",countP,countN);	
}
	
