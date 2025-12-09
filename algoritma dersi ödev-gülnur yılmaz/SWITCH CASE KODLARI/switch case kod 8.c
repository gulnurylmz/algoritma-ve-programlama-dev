#include <stdio.h>

int main() {
    int notu;
    printf("Not (1-5): ");
    scanf("%d", &notu);

    switch(notu) {
        case 1: printf("Cok kotu"); break;
        case 2: printf("Kotu"); break;
        case 3: printf("Orta"); break;
        case 4: printf("Iyi"); break;
        case 5: printf("Cok iyi"); break;
        default: printf("Gecersiz not!");
    }

    return 0;
}
