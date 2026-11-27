#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 12
int main()
{
	srand(time(0));
	int a[SIZE],i,j,q1=0,q2=0,q3=0,q4=0,h1=0,h2=0;
	for(i=0;i<SIZE;i++)
	{
		a[i]=rand()%1000+1000;
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<SIZE/2;i++)
	h1+=a[i];
	printf("Sales in first half: %d",h1);
	printf("\n");
	for(i=SIZE/2;i<SIZE;i++)
	h2+=a[i];
	printf("Sales in second half: %d",h2);
	printf("\n");
	for(i=0;i<SIZE/4;i++)
	q1+=a[i];
	printf("Sales in first quater: %d",q1);
	printf("\n");
	for(i=SIZE/4;i<SIZE/2;i++)
	q2+=a[i];
	printf("Sales in second quater: %d",q2);
	printf("\n");
	for(i=SIZE/2;i<3*SIZE/4;i++)
	q3+=a[i];
	printf("Sales in third quater: %d",q3);
	printf("\n");
	for(i=3*SIZE/4;i<SIZE;i++)
	q4+=a[i];
	printf("Sales in fourth quater: %d",q4);
}
	
	
	
