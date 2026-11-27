#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void randomNum(int n,int a,int b)
{
	srand(time(0));
	int i,x;
	for(i=1;i<=n;i++)
	{
	x=rand()%(b-a)+a;
	printf("%d\t",x);
    }
}
int main()
{
	int num,str,endr;
	printf("enter num:");
	scanf("%d",&num);
	printf("enter str:");
	scanf("%d",&str);
	printf("enter endr:");
	scanf("%d",&endr);
	randomNum(num,str,endr);
}
