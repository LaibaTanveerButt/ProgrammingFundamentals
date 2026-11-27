#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
    char ch;
    int i=1;
	do{
		ch=rand() % ('Z'-'A')+'A';
		if(ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
		{
		printf("%c\t",ch);
		i++;
	    }
	} while(i<=5);
}
	
