#include<stdio.h>
int main()
{
	int n,sum,d1,d2,d3,rev;
	printf("enter a three digit number:");
	scanf("%d",&n);
	d1=n/100;
	d2=(n%100)/10;
	d3=n%10;
	rev=d3*100+d2*10+d1;
	sum=d1+d2+d3;
	printf("first digit is :%d\nsecond digit is :%d\nthird digit is :%d\n",d1,d2,d3);
	printf("sum is : %d\n",sum);
	printf("reverse of the number is: %d",rev);
}
