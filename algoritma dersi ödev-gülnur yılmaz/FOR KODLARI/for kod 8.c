#include <stdio.h>

int main() {
    char kelime[50];
    printf("Kelime gir: ");
    scanf("%s", kelime);

    for(int i = 0; kelime[i] != '\0'; i++) {
        printf("%c\n", kelime[i]);
    }

    return 0;
}
