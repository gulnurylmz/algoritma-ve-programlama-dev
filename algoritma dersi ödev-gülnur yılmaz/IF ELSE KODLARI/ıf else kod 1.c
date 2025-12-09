#include <stdio.h>

int main() {
    int a,b;
    
    printf("iki sayı girin");
    scanf("%d %d" , &a,&b);
    
    if(a>b) { 
        printf("büyük olan: %d", a);
    } else {
        printf("büyük olan: %d", b);
    }
    
    return 0;
}