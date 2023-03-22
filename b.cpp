#include <stdio.h>
int pow(int n1, int n2);
int main() {
    
	int ilk, a, sonuc;
    printf("sayi girin: ");
    scanf("%d", &ilk);
    
    printf("Us giriniz: ");
    scanf("%d", &a);
    
    sonuc = pow(ilk, a);
    printf("%d^%d = %d", ilk, a, sonuc);
    return 0;
}

int pow(int ilk, int a) {
    if (a != 0)
        return (ilk * pow(ilk, a - 1));
    else
        return 1;
}
