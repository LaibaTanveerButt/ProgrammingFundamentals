#include<stdio.h>
int main()
{
	char x[]="life, living matter and, as such, matter that shows certain attributes that \
include responsiveness, growth, metabolism, energy transformation, and reproduction. \
Although a noun, as with other defined entities, the word life might be better cast as \
a verb to reflect its essential status as a process. Life comprises individuals, living \
beings, assignable to groups (taxa). Each individual is composed of one or more minimal \
living units, called cells, and is capable of transformation of carbon-based and other \
compounds (metabolism), growth, and participation in reproductive acts. Life forms \
present on Earth today have evolved from ancient common ancestors through the generation \
of hereditary variation and natural selection. The several branches of science \
that reveal the common historical, functional, and chemical basis of the evolution of all \
life include electron microscopy, genetics, paleo biology (including paleontology), and \
molecular biology.";
int i,k,count,max=0;
for(i=0,k=1;x[i]!=0;i++)
{
	count++;
	if(x[i]==' ')
	{
	  printf("the length of the word %d is %d\n",k,count-1);
	  if(count>max)
	  max=count-1;
	  count=0;	
	  k++;
	}
}
   printf("\nthe maximun length of the word is :%d",max);
}
