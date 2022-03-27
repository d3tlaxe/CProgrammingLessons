#include <stdio.h>

void localFunc();

int globalInt;

int main(){
	
	
	// Scope/Kapsam kavram�
	// Local ve global de�i�ken fark�
	
	int sayi;
	
	//int yerelInt = 56;
	globalInt = 20;
	
	printf("main icindeki global : %d", globalInt);
	printf("\nfonksiyondan donen global : %d", globalIntFonksiyon());
	
	//printf("\nfonksiyondan donen global : %d", yerelIntFonksiyon());

				//De�i�ken Tan�mlay�c�lar
	/*
		
		//	auto		->	Local de�i�kenler i�in �n tan�ml� olarak gelir. Tan�mland��� kod blo�u i�erisinde aktiftir. O kod blo�u d���ndan eri�ilemez
		//	static		->	Bir kod blo�u i�erisinde tan�mlanan static de�i�ken o kod blo�u her �a�r�ld���nda mevcut de�erini korur.
		//	extern		->	Harici bir dosyada var olan de�i�kene i�aret eder.
		//	register	->	Bellek yerine CPU yazma�lar� �zerinden i�lem yapar. Daha h�zl� eri�ilir ancak CPU yazma�lar� s�n�rl� say�dad�r. 
		
	*/
	
	printf("\nilk gelen sayi : %d", besEkle());
	printf("\nikinci kez cagirildigindeki deger : %d", besEkle());
	
	
	//printf("Main i�indeki sayi : %d\n", sayi);
	//localFunc();
		
	return 0;
}

int besEkle(){
	static int sayi = 1;
	sayi += 5;
	return sayi;
}


/*
int yerelIntFonksiyon(){
	yerelInt = 32;
	return yerelInt;
}
*/

int globalIntFonksiyon(){
	globalInt = 45;
	return globalInt;
}


void localFunc(){
	
	int sayi = 5;
	printf("Fonksiyondan Gelen sayi : %d\n", sayi);		
}
