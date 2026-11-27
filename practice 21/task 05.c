#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int num,i=1,incre;
	num=rand()%20+1;
    printf("Random numbers:%d\t",num);
    for(i=1;i<=10;i++)
    {
    	incre=(rand()%2==0)?2:3;
    	num+=incre;
    	printf("%d\t",num);
	}
}
    
	

