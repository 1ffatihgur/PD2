#include<stdio.h>
#include<stdlib.h>


int carp(int sayi1, int sayi2)
{
	
	int carpim=0;
	
	if(sayi1==0 || sayi2==0)
	{
		return 0;
	}
	
	else
	{
		carpim = sayi1 * sayi2;
	}
	
	
	
}

int main()
{
	
	int a,b;
	
	printf("birinci sayi giriniz: ");
	scanf("%d",&a);	
	
	printf("birinci sayi giriniz: ");
	scanf("%d",&b);

	carp(a,b);	
	
	
	
	
	return 0;
}
