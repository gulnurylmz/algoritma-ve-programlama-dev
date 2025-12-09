#include <stdio.h>
int main() {
    int T;
    
    printf("sıcaklığı girin");
    scanf("%d", &T);
    
    if(T<0) {
           printf("su katı haldedir: %d\n", T);
    }       
    else if(T>=0 && T<100) {
           printf("su sıvı haldedir: %d\n", T);
    }       
    else {
           printf("su gaz haldedir: %d\n", T);
    
    }
    return 0;
}   