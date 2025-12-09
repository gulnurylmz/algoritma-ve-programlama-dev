#include <stdio.h>
int main() {
	int N, k = 1, toplam = 0;
	scanf("%d", &N);
	while(k <= N) {
	    toplam += k;
	    k++;
	}
	printf("toplam = %d", toplam);

	return 0;
}