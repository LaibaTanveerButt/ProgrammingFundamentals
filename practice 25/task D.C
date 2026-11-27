#include<stdio.h>
int main()
{
	int i,j,k;
	char c1[20],c2[30],c3[50];
	printf("enter first string:");
	scanf("%[^\n]%*c",c1);
	printf("enter second string:");
	scanf("%[^\n]%*c",c2);
	for(i=0;c1[i]!=0;i++)
	c3[i]=c1[i];
	for(j=i,k=0;c2[k]!=0;j++,k++)
	c3[j]=c2[k];
	c3[j]=0;
	printf("\n%s",c3);
}
