#include <stdio.h>
int main() {
    int sayı, toplam = 0;
    scanf("%d", &sayı);
    while(sayı > 0) {
        toplam += sayı % 10;
        sayı /= 10;
    }
    printf("basamak toplamı = %d", toplam);
    
    
    return 0;
}