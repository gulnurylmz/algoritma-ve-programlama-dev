#include <stdio.h>
int main() {
	int sayı;
	printf("bir sayı girin");
	scanf("%d", &sayı);

	switch(sayı % 2) {
	case 0:
		printf("cifttir\n");
		break;
	case 1:
		printf("tektir\n");
		break;
	}
	return 0;
}