#include<stdio.h>
int main()
{
	int k,i;
	char chC='A',chS='a';
	printf("enter how many characters u waht to print....");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		printf("%c",chC);
		chC++;
	}
	printf("\n");
	for(i=1;i<=k;i++)
	{
		printf("%c",chS);
		chS++;
	}
}
