#include <stdio.h>
int main() {
	int sayı, basamak = 0;
	scanf("%d", &sayı);
	
	while(sayı > 0) {
	    basamak++;
	    sayı /= 10;
	}
	
	printf("basamak sayısı = %d", basamak);

    return 0;
}