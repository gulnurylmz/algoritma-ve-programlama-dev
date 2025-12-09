#include <stdio.h>
int main() {
    int A,B,C;
    
    printf("A sayısını giriniz");
    scanf("&d", &A);
    
    printf("B sayısını giriniz");
    scanf("&d", &B);
    
    printf("C sayısını giriniz");
    scanf("&d", &C);
    
    
    if(A>=B && A>=C) {
           printf("en buyuk sayı: %d\n", A);
    }       
    else if(B>=A && B>=C) {
           printf("en buyuk sayı: %d\n", B);
    }       
    else {
           printf("en buyuk sayı: %d\n", C);
    
    }
    return 0;
}   