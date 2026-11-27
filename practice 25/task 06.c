#include<stdio.h>
int main()
{
	char c1[]="Laiba Tanveer";
	char c2[1],c3[1];
	int i,j,k;
	i=0;
	c2[i]=c1[i];
	printf("%s",c2);
	printf("\n\n");
	for(i=0; c1[i]!=0; i++)
	{
		if(c1[i]==' ')
		{
			c3[i]=c1[i];
			break;
		}
	}
		printf("%c",c3);
	
}
