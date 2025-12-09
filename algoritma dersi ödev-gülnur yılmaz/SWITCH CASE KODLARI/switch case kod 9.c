#include <stdio.h>

int main() {
    char not;
    printf("Harf notu (A,B,C,D,F): ");
    scanf(" %c", &not);

    switch(not) {
        case 'A': printf("90 - 100"); break;
        case 'B': printf("80 - 89"); break;
        case 'C': printf("70 - 79"); break;
        case 'D': printf("60 - 69"); break;
        case 'F': printf("0 - 59"); break;
        default: printf("Gecersiz not!");
    }

    return 0;
}
