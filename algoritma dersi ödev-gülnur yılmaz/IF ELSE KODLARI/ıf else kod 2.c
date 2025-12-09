#include <stdio.h>

int main() {
    int sayi;
    
    printf("bir sayi giriniz");
    scanf("%d", &sayi);
    
    if(sayi>0) {
        printf("sayi pozitiftir.\n");
    }
    else if(sayi<0) {
        printf("sayi negatiftir.\n");
    }
    else {
        printf("sayi sıfırdır.\n");
    }
    
    return 0;
}