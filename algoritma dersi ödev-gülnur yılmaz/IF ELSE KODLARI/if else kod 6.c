#include <stdio.h>
int main() {
    int Y,Z;
    
    printf("Y sayısını giriniz");
    scanf("&d", &Y);
    
    printf("Z sayısını giriniz");
    scanf("&d", &Z);
    
    if(Z != 0) {
        if(Y % Z == 0)
           printf("%d,%d'ye tam bolunur.\n", Y,Z);
        else
           printf("%d,%d'ye tam bolunmez.\n", Y,Z);
    }
    
    return 0;
}   