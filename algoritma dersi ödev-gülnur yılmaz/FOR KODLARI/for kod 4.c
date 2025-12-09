#include <stdio.h>
int main() {
    int toplam = 0;
    
    for(int i = 1; i <= 5; i++) {
        toplam += i;
    }
    
    printf("1 ile 5 arasındaki sayıların toplamı: %d\n", toplam);
    
    
    return 0;
}