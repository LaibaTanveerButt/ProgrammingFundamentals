#include<stdio.h>
int main()
{
	int i,j,k,r,c,cadd;
	char ch='a',let;
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter columns:");
	scanf("%d",&c);
	let=ch;
	cadd=c;
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=cadd;j++)
		printf("%d ",j);
		printf("\n");
		for(k=1,let=ch;k<=c;k++,let++)
		printf("%c ",let);
	    printf("\n");
	    ch++;
	    cadd++;
    }
}

