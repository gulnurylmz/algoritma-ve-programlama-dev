#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Iki sayi gir: ");
    scanf("%f %f", &a, &b);

    printf("Islem sec (+ - * /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': printf("Sonuc: %.2f", a + b); break;
        case '-': printf("Sonuc: %.2f", a - b); break;
        case '*': printf("Sonuc: %.2f", a * b); break;
        case '/': printf("Sonuc: %.2f", a / b); break;
        default: printf("Gecersiz islem!");
    }

    return 0;
}
