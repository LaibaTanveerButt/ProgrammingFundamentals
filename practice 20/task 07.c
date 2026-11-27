#include<stdio.h>
#include<math.h>
int power(int x,int y)
{
	int p;
	p=pow(x,y);
	return p;
}
int main()
{
	int a,b;
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("%d",power(a,b));
}
