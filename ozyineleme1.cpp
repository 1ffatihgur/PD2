#include<stdio.h>
#include<stdlib.h>


int faktoryelbul(int sayi)
{
	int sum,faktor;
	faktor = 1;
	sum = 0;
	
	if(sayi<0)
	{
		printf("hatali giris!");
	}
	
	else if(sayi == 1)
	{
		return 1;
	}
	
	else
	{
		faktor = sayi * faktoryelbul(sayi - 1);
		return faktor;
	}
	
	
		
}


int main()
{
	int a;
	
	printf("sayi giriniz: ");
	scanf("%d",&a);
	
	printf("\n");
	
	printf("sayilarin faktoriyeli: %d", faktoryelbul(a));
	
	
	
	
	
	return 0;
}
