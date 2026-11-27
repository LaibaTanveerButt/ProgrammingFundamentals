#include<stdio.h>
float averagePrint(int n1,int n2,int n3)
{
	float avg;
	avg=(n1+n2+n3)*1.0/3.0;
	return avg;
}
int main()
{
	int a,b,c;
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("enter C:");
	scanf("%d",&c);
	printf("%f",averagePrint(a,b,c));
}
