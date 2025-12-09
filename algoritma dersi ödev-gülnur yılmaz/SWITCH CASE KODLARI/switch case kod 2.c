#include <stdio.h>
int main() {
	int dogumyılı, yas;
	printf("dogum yılınızı girin:");
	scanf("%d", &dogumyılı);
	yas = 2025 - dogumyılı;
	
	switch(yas / 10) {
	    case 0:
	        printf("cocuk\n");
	        break;
	    case 1:
	        printf("genc\n");
	        break;
	    case 2:
	        printf("yetiskin\n");
	        break;
	    default:
	        printf("yaslı\n");
	}
	return 0;
}