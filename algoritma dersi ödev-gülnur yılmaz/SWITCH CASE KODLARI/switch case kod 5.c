#include <stdio.h>
int main() {
	int N, toplam = 0;
	printf("N sayısını girin:");
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++) {
	    switch(1) {
	        case 1: toplam += i;
	            printf("toplam:\n", toplam);
	            break;
	    }
	}
	

	return 0;
}