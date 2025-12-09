#include <stdio.h>
int main() {
	int sayı;
	printf("bir sayı girin:");
	scanf("%d", &sayı);

	switch(sayı > 0) {
	    case 0:
	        printf("sayı pozitiftir\n");
	        break;
	}        
	switch(sayı < 0) {      
	    case 1:
	        printf("sayı negatiftir\n");
	        break;
	}        
	switch(sayı == 0) {       
	    case 2:
	        printf("sayı sıfırdır\n");
	        break;
	    
	}
	return 0;
}