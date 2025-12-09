#include <stdio.h>
int main() {
    int yas;
    
    printf("yasınızı girin");
    scanf("&d", &yas);
    
    if(yas>=18) {
        printf("ehliyet alabilirsiniz.\n");
    }
    else {
        printf("ehliyet alamazsınız.\n");
    }
    
    return 0;
}   