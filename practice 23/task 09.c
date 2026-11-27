#include<stdio.h>
int main()
{
	int x[20]={6,4,9,3,0,6,3,0,6,7,8,9,8,5,9,2,0,0,3,2};
	int i,j,k,avg,sum1=0,sum2=0,count1=0,count2=0;
	for(i=0;i<20;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
	i=0;
	printf("%d %d ",x[i],x[i+1]);
	for(i=2;i<18;i++)
	{ 
	    avg=0;
     	count1=0;
     	count2=0;
     	sum1=0;
     	sum2=0;
	    for(j=i-1;count1<2;j--)
	    {
		sum1+=x[j];
		count1++;
	    }
		for(k=i+1;count2<2;k++)
		{
			sum2+=x[k];
			count2++;
		}	
		avg=(sum1+sum2)/4;
		printf("%d ",avg);
	}
	i=18;
	printf("%d %d",x[i],x[i+1]);
}
