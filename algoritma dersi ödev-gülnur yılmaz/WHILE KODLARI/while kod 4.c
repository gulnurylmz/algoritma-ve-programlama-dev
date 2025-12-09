#include <stdio.h>
int main() {
	int sayı, pozitif = 0, negatif = 0;
	scanf("%d", &sayı);
	while(sayı != 0) {
	    if(sayı > 0) pozitif++;
	    else negatif++;
	    scanf("%d", &sayı);
	}
	printf("pozitif: %d\n negatif: %d", pozitif,negatif);

	return 0;
}