#include <stdio.h>
int main() {
    int n, faktoriyel = 1, i = 1;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
    } else {
        while (i <= n) {
            faktoriyel *= i;
            i++;
        }
        printf("%d! = faktoriyel\n", n, faktoriyel);
    
}
	return 0;
}