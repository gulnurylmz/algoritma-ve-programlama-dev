#include <stdio.h>
int main() {
    int sayı;
    
    printf("bir sayı giriniz:");
    scanf("%d", &sayı);
    
    printf("%d sayısının pozitif bolenleri:\n", sayı);
    
    for(int i = 1; i <= sayı; i++) {
        if(sayı % i == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}