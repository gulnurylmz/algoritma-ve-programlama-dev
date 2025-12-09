#include <stdio.h>
int main() {
    int X;
    
    printf("notu girin");
    scanf("%d", &X);
    
    if(X>50) {
           printf("gecti: %d\n", X);
    }       
    else {
           printf("kaldı: %d\n", X);
    
    }
    return 0;
}   