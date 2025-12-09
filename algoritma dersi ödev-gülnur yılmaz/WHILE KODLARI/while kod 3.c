#include <stdio.h>
int main() {
	int N, k = 1, toplam = 0;
	scanf("%d", &N);
	while(k <= N) {
		if(k % 2 == 0) toplam += k;
		k++;
	}
	printf("cift sayD1larD1n toplamD1 = %d", toplam);

	return 0;
}