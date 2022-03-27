#include <stdio.h>

void asciiyazdir();
int main(){
	
		/*	Kullanýcýdan iki tane tamsayý alan ve bu ikisi arasýndaki tamsayýlarýn toplamýný ekrana yazan programý yazalým	*/
/*	
	int sayi1, sayi2, toplam; 
	printf("1. sayiyi giriniz:");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d", &sayi2);
	
	// 5
	// 10
	// 5 6 7 8 9 10
	
	for(sayi1	; sayi1<=sayi2	; sayi1++){
		toplam += sayi1;
	}
	printf("Toplam : %d", toplam);
	
*/	
	

	asciiyazdir();
	
	return 0;
}


void asciiyazdir(){
		printf("\n\n\tASCII TABLE\t\t\t\t\n");
	printf("___________________________\n");
	
	int min = -128;
	int max = 127;
	
	for(min; min <= max; min++){
		
		printf("Decimal\t||Character\n");
		printf("%d\t||\t%c\n",min,min);	
	}

}

