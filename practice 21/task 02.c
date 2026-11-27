#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x,y,i;
	x=rand()%9+1;
	y=rand()%9+1;
	printf("%d %d \n",x,y);
	do{
		x=rand()%90+1;
	    y=rand()%90+1;
	}while(y%x!=0);
	if(y%x==0)
	printf("%d %d\n",x,y);
}
