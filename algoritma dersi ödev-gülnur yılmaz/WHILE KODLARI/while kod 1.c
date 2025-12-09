#include <stdio.h>
int main() {
    int n, A = 2, asal = 1;
    scanf("%d", &n);
    
    while (A < n) {
         if(n % A == 0) {
             asal = 0;
             break;
         }
         A++;
    } 
    
    if(asal && n > 1) 
    printf("asal");
    else
    printf("asal değildir");
    
    return 0;
}