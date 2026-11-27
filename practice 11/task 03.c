#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i=1,d1,d2;
	while(i<=10)
	{
		n=rand()%100+1;
		printf("%d\n",n);
		d1=n/10;
		d2=n%10;
		if(n==0)
		printf("ZERO");
		else if(n==1)
		printf("ONE");
		else if(n==2)
		printf("TWO");
		else if(n==3)
		printf("THREE");
		else if(n==4)
		printf("FOUR");
		else if(n==5)
		printf("FIVE");
		else if(n==6)
		printf("SIX");
		else if(n==7)
		printf("SEVEN");
		else if(n==8)
		printf("EIGHT");
		else if(n==9)
		printf("NINE");
		else if(n==10)
		printf("TEN");
		else if(n==11)
		printf("ELEVEN");
		else if(n==12)
		printf("TWELVE");
		else if(n==13)
		printf("THIRTEEN");
		else if(n==14)
		printf("FOURTEEN");
		else if(n==15)
		printf("FIFTEEN");
		else if(n==16)
		printf("SIXTEEN");
		else if(n==17)
		printf("SEVENTEEN");
		else if(n==18)
		printf("EIGHTEEN");
		else if(n==19)
		printf("NINETEEN");
		else
		{
			if(d1==2)
			printf("TEWENTY ");
			else if(d1==3)
			printf("THIRTY ");
			else if(d1==3)
			printf("THIRTY ");
			else if(d1==4)
			printf("FORTY ");
			else if(d1==5)
			printf("FIFTY ");
			else if(d1==6)
			printf("SIXTY ");
			else if(d1==7)
			printf("SEVENTY ");
			else if(d1==8)
			printf("EIGTTY ");
			else if(d1==9)
			printf("NINTY");
			if(d2==0)
			printf("\n");
			else if(d2==1)
			printf("ONE");
			else if(d2==2)
		printf("TWO");
		else if(d2==3)
		printf("THREE");
		else if(d2==4)
		printf("FOUR");
		else if(d2==5)
		printf("FIVE");
		else if(d2==6)
		printf("SIX");
		else if(d2==7)
		printf("SEVEN");
		else if(d2==8)
		printf("EIGHT");
		else if(d2==9)
		printf("NINE");
		}
		i++;
		printf("\n");
	}
}
	
