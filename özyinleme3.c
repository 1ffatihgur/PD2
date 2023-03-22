#include<stdio.h>
int i=1; 
int sum=1;
	
int kuvvet(int num,int us)
{
	

	
	if(i<=us)
	{
		sum = sum * num;
		kuvvet(num, us-1);
	}
	
	else
	{
		return sum;
	}
	
	
}

int main()
{
	
	int a,b;
	
	printf("sayi giriniz: ");
	scanf("%d",&a);
	
	printf("us giriniz: ");
	scanf("%d",&b);
	
	printf("islem sonucu: %d",kuvvet(a,b));
	
	
	
	return 0;
}
