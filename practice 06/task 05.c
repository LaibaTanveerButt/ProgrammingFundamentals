#include<stdio.h>
int main()
{
	int l1,l2,w1,w2,a1,a2;
	printf("enter length 1:");
	scanf("%d",&l1);
	printf("enter width 1:");
	scanf("%d",&w1);
	printf("enter length 2:");
	scanf("%d",&l2);
	printf("enter width 2:");
	scanf("%d",&w2);
	a1=l1*w1;
	a2=l2*w2;
	if(a1>a2)
	printf("first rectangle has greater area :%d",a1);
	else
	printf("second rectangle has greater area :%d",a2);
}
