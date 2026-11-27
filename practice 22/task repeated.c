#include<stdio.h>
int main()
{
	int x[16]={23,45,18,23,17,45,36,23,45,18,36,45,18,17,23,17};
	int i,j,k,y[16],c[16];
	int isDistinct,count=0,countf=0;
	printf("X:");
	for(i=0,k=0;i<16;i++)
	printf("%d ",x[i]);
	printf("\n");
	for(i=0;i<16;i++)
	{
		isDistinct=1;
		for(j=0;j<i;j++)
		{
			if(x[i]==x[j])
			{
				isDistinct=0;
				break;
			}
		}
		if(isDistinct==1)
		{
		  y[k]=x[i];
		  count++;
		  k++;
	     }
	}
	printf("Y:");
	for(i=0;i<count;i++)
	printf("%d ",y[i]);
	for(i=0;i<count;i++)
	{
		countf=0;
		for(j=0;j<16;j++)
		{
			if(x[i]==x[j])
			countf++;
		}
		c[i]=countf;
	}
	printf("\nC:");
	for(i=0;i<count;i++)
	printf("%d  ",c[i]);
}
