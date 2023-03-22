#include<stdio.h>

void teksayi(int dizi[], int n)
{
	if(n<0)
	{
		return;
	}
	
	else
	{
		if(dizi[n] % 2 == 1)
		{
			printf("%d\n",dizi[n]);
		}
		
		teksayi(dizi,n-1);
	}
}


int main()
{
	int dizi[100],sayi, i;
	
	printf("dizinizin eleman sayisini girin: ");
	scanf("%d",&sayi);
	
	for(i=0; i<sayi; i++)
	{
		printf("%d. elemani girin: ",sayi+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("%d ",a[i]);
	printf("girilen dizide %d tane tek sayi var.",sayi);
	
}
