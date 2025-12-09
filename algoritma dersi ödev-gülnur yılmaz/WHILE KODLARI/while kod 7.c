#include <stdio.h>
int main() {
	int sayi, rakam;
	printf("Bir Sayı Giriniz");
	scanf("%d", &sayi);
	printf("Sayinin Ters Yazilisi");
	
	while(sayi>0) {
		rakam = sayi % 10;
		printf("%d", &rakam);
		sayi = sayi / 10;
	}
	printf("%d", &sayi);
	
	return 0;
}