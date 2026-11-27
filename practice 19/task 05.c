#include<stdio.h>
void nextV(char c)
{
	char i;
		if(c=='A'|| c=='B' || c=='C'|| c=='D')
		printf("E");
		if(c=='F'|| c=='G' || c=='H')
		printf("I");
		if(c=='I'|| c=='J'|| c=='K' || c=='L'|| c=='M' || c=='N')
		printf("O");
		if(c=='O'|| c=='P'|| c=='Q' || c=='R'|| c=='S' || c=='T')
		printf("U");
		if(c=='U'||c=='V'|| c=='W' || c=='X'|| c=='Y' || c=='Z')
		printf("A");	
}
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	nextV(ch);
}
