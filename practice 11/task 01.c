#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x,y,i=1;
	while(i<=10)
	{
		x=rand()%100;
		y=rand()%100;
		printf("%d %d\n",x,y);
		if(x>y)
		printf("first random number is larger\n");
		else
		printf("second random number is larger\n");
		i++;
	}
}
