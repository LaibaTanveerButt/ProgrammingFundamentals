#include<stdio.h>
int main()
{
	int vi,vf,d,t,vfsq,a,d2;
	printf("enter initial velocity:");
	scanf("%d",&vi);
	printf("enter acceleration:");
	scanf("%d",&a);
	printf("enter time:");
	scanf("%d",&t);
	vf=vi+a*t;
	printf("enter distance:");
	scanf("%d",&d);
	vfsq=vi*vi+2*a*d;
	d2=vi*t+(a*t*t)/2;
	printf("final velocity iis :%d\n",vf);
	printf("square velocity is :%d\n",vfsq);
	printf("distance is :%d\n",d2);
}
