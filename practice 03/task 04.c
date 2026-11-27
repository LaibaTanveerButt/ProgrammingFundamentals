#include<stdio.h>
int main()
{
	int milk,sugar,tea,bis;
	printf("Previous month budget\n");
	printf("Milk:");
	scanf("%d",&milk);printf("Sugar:");
	scanf("%d",&sugar);
	printf("Tea:");
	scanf("%d",&tea);
	printf("Biscuits:");
	scanf("%d",&bis);
	printf("Next month budget\n");
	printf("Milk:%d\n",milk+milk*20/100);
	printf("Sugar:%d\n",sugar+sugar*20/100);
	printf("Tea:%d\n",tea+tea*20/100);
	printf("Biscuits:%d\n",bis+bis*20/100);
	printf("-------------------------------------\n");
	printf("total:%d",milk+milk*20/100+sugar+sugar*20/100+tea+tea*20/100+bis+bis*20/100);
	
}
