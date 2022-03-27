#include <stdio.h>

void localFunc();

int globalInt;

int main(){
	
	
	// Scope/Kapsam kavramý
	// Local ve global deðiþken farký
	
	int sayi;
	
	//int yerelInt = 56;
	globalInt = 20;
	
	printf("main icindeki global : %d", globalInt);
	printf("\nfonksiyondan donen global : %d", globalIntFonksiyon());
	
	//printf("\nfonksiyondan donen global : %d", yerelIntFonksiyon());

				//Deðiþken Tanýmlayýcýlar
	/*
		
		//	auto		->	Local deðiþkenler için ön tanýmlý olarak gelir. Tanýmlandýðý kod bloðu içerisinde aktiftir. O kod bloðu dýþýndan eriþilemez
		//	static		->	Bir kod bloðu içerisinde tanýmlanan static deðiþken o kod bloðu her çaðrýldýðýnda mevcut deðerini korur.
		//	extern		->	Harici bir dosyada var olan deðiþkene iþaret eder.
		//	register	->	Bellek yerine CPU yazmaçlarý üzerinden iþlem yapar. Daha hýzlý eriþilir ancak CPU yazmaçlarý sýnýrlý sayýdadýr. 
		
	*/
	
	printf("\nilk gelen sayi : %d", besEkle());
	printf("\nikinci kez cagirildigindeki deger : %d", besEkle());
	
	
	//printf("Main içindeki sayi : %d\n", sayi);
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
