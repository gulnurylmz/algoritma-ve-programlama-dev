#include <stdio.h>
int main() {
    int toplam = 0;
    
    for(int i = 1; i<=30; i++) {
        if(i % 2 == 0) {
            toplam += i;
        }
    }
    
    printf("1'den 30'a kadar cift sayıların toplamı: %d\n", toplam);
    
    return 0;
}