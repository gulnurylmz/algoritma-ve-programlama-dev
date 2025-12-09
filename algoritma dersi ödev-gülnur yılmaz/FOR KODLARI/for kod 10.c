#include <stdio.h>

int main() {
    int toplam = 0;

    for(int i = 1; i <= 20; i++) {
        toplam += i;
    }

    float ortalama = toplam / 20.0;

    printf("Toplam = %d\n", toplam);
    printf("Ortalama = %.2f", ortalama);

    return 0;
}
