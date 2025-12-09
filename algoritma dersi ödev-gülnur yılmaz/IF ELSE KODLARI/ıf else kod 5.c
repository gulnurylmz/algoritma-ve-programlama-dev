#include <stdio.h>
int main() {
    int n;
    
    printf("bir sayı giriniz");
    scanf("&d", &n);
    
    if(n<0) {
        n = n*(-1);
        printf("sayının mutlak değeri: %d\n", n*(-1));
    }
    else if(n>0) {
        printf("sayının mutlak değeri: %d\n", n);
    }
    
    return 0;
}   