#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	
	int i,j;
	int zar1[2];
	int zar2[2];
	srand(time(NULL));
	int toplam1=0;
	int toplam2=0;
	
	for(i=0; i<2; i++)
	{
		zar1[i] = 1+rand() % 6;
	}
	
	for(i=0; i<2; i++)
	{
		zar2[i] = 1+rand() % 6;		
	}
	
	for(i=0; i<2; i++)
	{
		printf("%d. zar: %d\n", i+1,zar1[i]);
	}			
	
	for(i=0; i<2; i++)
	{
		printf("%d. zar: %d\n", i+1,zar2[i]);
	}				
	
	
	for(i=0; i<2; i++)
	{
		toplam1 = toplam1 + zar1[i];	
	}	
	

	for(i=0; i<2; i++)
	{
		toplam2 = toplam2 + zar2[i];	
	}		
	
	
	printf("1. zarlarin toplami: %d\n",toplam1);
	printf("2. zarlarin toplami: %d\n",toplam2);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
