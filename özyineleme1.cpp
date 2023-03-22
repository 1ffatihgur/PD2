#include<stdio.h>
#include<stdlib.h>

int fib(int sayi)
{
	
	if(sayi == 0 || sayi == 1)
	{
		return sayi;
	}
	
	return fib(sayi - 1) + fib(sayi - 2);
	
}

int main()
{
	
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("%d ",fib(i));	
	}	
	
	printf("\n");

	
	return 0;
}
