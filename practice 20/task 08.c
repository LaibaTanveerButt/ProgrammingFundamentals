#include<stdio.h>
char nextVowel(char c)
{
		if(c=='A'|| c=='B' || c=='C'|| c=='D')
		return 'E';
		if(c=='F'|| c=='G' || c=='H')
		return 'I';
		if(c=='I'|| c=='J'|| c=='K' || c=='L'|| c=='M' || c=='N')
		return 'O';
		if(c=='O'|| c=='P'|| c=='Q' || c=='R'|| c=='S' || c=='T')
	    return 'U';
		if(c=='U'||c=='V'|| c=='W' || c=='X'|| c=='Y' || c=='Z')
		return 'A';	
}
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	printf("%c",nextVowel(ch));
}
