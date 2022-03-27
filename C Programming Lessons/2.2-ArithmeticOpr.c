#include <stdio.h>

int main(){

	//Arithmetic operators / Aritmetik operatörler
	/*
		+	Toplama
		-	Çýkarma
		*	Çarpma
		/	Bölme
		%	Mod Alma
	*/
	
	int sayi1 = 10;
	int sayi2 = 5;
	int sayi3;  // default : 0


	printf("Toplam : %d\n", (sayi1 + sayi2));

	printf("Carpim : %d\n", (sayi1 - sayi2));

	printf("Fark : %d\n", (sayi1 * sayi2));

	printf("Bolum : %d\n", (sayi1 / sayi2));

	printf("Kalan : %d\n", (sayi1 % sayi2));
	
	printf("Varsayilan int degeri : %d", sayi3);
	
	return 0;
}
