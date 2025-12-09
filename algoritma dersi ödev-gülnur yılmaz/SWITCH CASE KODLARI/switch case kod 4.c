#include <stdio.h>
int main() {
	int sayı, kare;
	printf("bir sayı girin:");
	scanf("%d", &sayı);
	
	switch(1) {
	    case 1: kare = sayı * sayı;
	        printf("karesi:%d\n", kare);
	        break;
	}

	return 0;
}