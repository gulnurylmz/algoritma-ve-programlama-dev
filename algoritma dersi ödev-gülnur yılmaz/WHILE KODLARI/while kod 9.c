#include <stdio.h>
int main() {
	int x,y,sayac=0; 
	
	printf("Birinci Sayiyi Gir: ");
	scanf("%d",&x);
	
	printf("Ikinci Sayiyi Gir: ");
	scanf("%d",&y);
	
	while (x>=y) {
		x=x-y;
		sayac=sayac+1;
	}
	printf("Bolum = %d",sayac);
	printf("\nKalan = %d",x);

    
    return 0;
}