#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i=1,n,sumE=0,sumO=0;
	while(i<=10)
	{
		n=rand()%100+1;
		printf("%d\n",n);
		if(n%2==0)
		{
			printf("number is even\n");
		    sumE+=n;
	    }
		else
		{
			printf("number is odd\n");
		   sumO+=n;
	    }
		i++;
	}
	printf("sum of even numbers are:%d\n",sumE);
	printf("sum of odd numbers are:%d\n",sumO);
}
	
