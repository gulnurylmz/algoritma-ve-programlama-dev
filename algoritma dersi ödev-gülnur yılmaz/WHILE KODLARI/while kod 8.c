#include <stdio.h>
int main() {
    int n, i = 1, sayi, min;
    
    printf("kac sayı gireceksiniz: ");
    scanf("%d", &n);
    
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi);
    min = sayi;  // ilk sayı en küçük kabul edilir

    i = 2;
    while (i <= n) {
        printf("%d. sayiyi giriniz: ", i);
        scanf("%d", &sayi);

        if (sayi < min) {
            min = sayi;
        }
        i++;
    }

    printf("En kucuk sayi: %d\n", min);

    return 0;
}