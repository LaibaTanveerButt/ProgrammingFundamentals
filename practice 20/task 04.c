#include<stdio.h>
#include<math.h>
void quadRoots(float a,float b,float c)
{
	float x1,x2,dis,n,d;
	dis=b*b-4.0*a*c;
    printf("discremenent is:%f\n",dis);
	if(dis==0)
	printf("Roots are equal:%f\n",-b/(2*a));
	else if(dis<0)
	printf("Roots are imaginary.");
	else if(a==0 && c!=0)
	printf("Equation is linear :%f",-b/c);
	else
	{
	n=sqrt(dis);
	d=2.0*a;
	x1=(-b+n)/d;
	x2=(-b-n)/d;
	printf("Roots are :%f\t%f\n",x1,x2);
	}
}
int main()
{
	float p1,p2,p3;
	printf("enter p1:");
	scanf("%f",&p1);
	printf("enter p2:");
	scanf("%f",&p2);
	printf("enter p3:");
	scanf("%f",&p3);
	quadRoots(p1,p2,p3);
}
	
	

