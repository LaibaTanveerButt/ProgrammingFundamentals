#include<stdio.h>
int main()
{
	char c1[10],c2[10],c3[]="Laiba Tanveer";
	int i,j,k;
	for(i=0;c3[i]!=' ';i++)
	c1[i]=c3[i];
	c1[i]=0;
	for(j=i,k=0;c3[j]!=0;j++,k++)
	c2[k]=c3[j];
	c2[k]=0;
	printf("first:	%s\n",c1);
	printf("second:	%s\n",c2);
	
}
