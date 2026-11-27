#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isExist(int x[], int i){
	int temp = x[i];
	int count=0;
	for (i-- ; i >= 0 ; i--)
		if (x[i] == temp)
		{
			count++;
			return i;
		}
	return -1;
	printf("%d ",count);
}
void show(int x[], const int SIZE){
	int i;
	for (i = 0 ; i < SIZE ; i++)
		printf("%d ", x [ i ] );
	printf("\n");
}
int main(){
	int a[17] = {23,45,18,23,17,45,36,23,45,18,36,45,18,17,36,23,17}; // 23 15 81 64 24
	int i;
	for(i=0;i<17;i++)
	printf("%d ",a[i]);
	printf("\n");
	for (i = 0 ; i < 17 ; i++)
		if (isExist(a, i) == -1)
			printf("%d ", a[ i ] );
	printf("\n");
	return 0;
}

