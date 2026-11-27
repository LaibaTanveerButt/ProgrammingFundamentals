#include<stdio.h>
int main()
{
	int x,y;
	int result;
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	result=x*x*x-y*y*y-3*x*x*y+3*x*y*y;
	printf("result is :%d",result);
}
