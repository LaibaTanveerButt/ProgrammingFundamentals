#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i=1;
	char ch;
	while(i<=10)
	{
		ch='A'+rand()%('Z'-'A'+1);
		printf("%c\n",ch);
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		printf("character is a vowel");
		else
		printf("character is consonant");
		i++;
		printf("\n");
	}
}
		
