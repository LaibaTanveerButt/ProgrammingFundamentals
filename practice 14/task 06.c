#include<stdio.h>
int main()
{
	char c='A';
	int i;
	for(;c<='Z';c++)
	{
		if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		printf("\n%c\n",c);
		else
		printf("%c ",c);
	}
}
