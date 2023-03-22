#include<stdio.h>
#include<stdlib.h>

int topla(int sayi)
{
	if(sayi == 1)
	{
		return 1;
	}
	
	return sayi + topla(sayi-1);
	
}


int main()
{
	
	int a;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&a);
	
	printf("\n");
	
	printf("sayilarin toplami: %d",topla(a));
	
	
	
	
	
	
	return 0;
}
