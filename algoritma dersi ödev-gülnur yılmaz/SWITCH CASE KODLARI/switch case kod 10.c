#include <stdio.h>

int main() {
    char renk[10];

    printf("Renk gir (kirmizi/sari/yesil): ");
    scanf("%s", renk);

    switch(renk[0]) {
        case 'k': printf("DUR"); break;
        case 's': printf("HAZIR"); break;
        case 'y': printf("GEC"); break;
        default: printf("Gecersiz renk!");
    }

    return 0;
}
