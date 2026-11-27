#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x[20]={6,4,9,3,0,6,3,0,6,7,8,9,8,5,9,2,0,0,3,2},i,j;
	int avg,sum=0,count1=0,count2=0;
	printf("%d %d",x[0],x[1]);
	for(i=2;i<20;i++)
	{
			avg=0;
			sum=0;
			for(j=i-2; j<20 && count1<=2 ;j++)
			{
				sum+=x[i];
				count1++;
			}
			for(j=i+1; j<20 && count2<=2 ;j++)
			{
				sum+=x[i];
				count2++;
			}
			avg=sum/4;
			printf("%d ",avg);
	}
}
