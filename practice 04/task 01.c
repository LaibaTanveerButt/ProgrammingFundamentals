#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x1,x2,dis,dis_sq;
	printf("enter a and b and c:");
	scanf("%d,%d,%d",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis<0)
	printf("roots are imaginary");
    else if(dis==0)
	printf("roots are equal:%d",-b/(2*a));
	else if(a==0 && c!=0)
	printf("equation is linear:%d",-b/c);
	else
	{
	dis_sq=sqrt(dis);
	x1=(-b + dis_sq)/(2*a);
	x1=(-b - dis_sq)/(2*a);
	printf("first root is x1:%d",x1);
	printf("second root is x2:%d",x2);
    }
}
