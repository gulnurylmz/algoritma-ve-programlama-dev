#include <stdio.h>
int main() {
    int S;
    
    printf("sıcaklık değeri girin");
    scanf("%d", &S);
    
    if(S<0) {
           printf("donma var: %d\n", S);
    }       
    else {
           printf("donma yok: %d\n", S);
    
    }
    return 0;
}   