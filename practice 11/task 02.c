#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x,y,z,i=1;
	while(i<=10)
	{
		x=rand()%100;
		y=rand()%100;
		z=rand()%100;
		printf("%d %d %d\n",x,y,z);
		if(x<y && x<z)
		{
			if(y<z)
			printf("%d %d %d\n",x,y,z);
			else
			printf("%d %d %d\n",x,z,y);
		}
		else if(y<x && y<z)
		{
			if(x<z)
			printf("%d %d %d\n",y,x,z);
			else
			printf("%d %d %d\n",y,z,x);
		}
		else
		{
			if(x<y)
			printf("%d %d %d\n",z,x,y);
			else
			printf("%d %d %d\n",z,y,x);
		}
		printf("\n\n");
		i++;
	}
}
