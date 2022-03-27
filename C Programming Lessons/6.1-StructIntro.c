#include <stdio.h>

//Sadece yap� ad� ile tan�mlama
struct araba{
	int hiz;
	float fiyat;
	int yolcuKapasitesi;
	char *turu;
	int modelYili;
};

//Hem yap� ad� hem de yap� de�i�kenlerinin adlar�yla birlikte tan�mlama
struct motor{
	int hiz;
	float fiyat;
	char *turu;
	char *modelAdi;
}honda, kawasaki, yamaha, suzuki;

//Sadece yap� de�i�keninin ad�yla tan�mlama
struct{
	int vites;
	int kadroBoyu;
	char *turu;
	char *frenTuru;	
}bisikletim;


//typedef anahtar kelimesini kullanarak tan�malama ve kullan�m an�nda sadece de�i�ken ismi �zerinden yap� �rnekleri olu�turma
typedef struct telefonlar{
	float fiyat;
	int modelYili;
	int ram;
	int dahiliDepolama;
}Huawei, Samsung, Apple, Xiaomi;





int main(){
	
	//	Farkl� veri t�rlerini bir araya getirerek yeni bir veri t�r� gibi kullanmam�za yarar
	
	// Tan�mlama t�rleri
		//	 Sadece yap� ad� ile tan�mlama ve kullan�m an�nda o yap� ad� �zerinden yeni de�i�ken yap�lar t�retme
				struct araba mustang;
				mustang.modelYili = 1967;
				printf("\nMustang Model Yili : %d", mustang.modelYili);
										
														
		//	 Hem yap� ad� hem de yap� de�i�kenlerinin adlar�yla birlikte tan�mlanan yap�lara de�i�ken ad� �zerinden eri�im
				honda.modelAdi = "Africa Twin";
				printf("\nHonda Motosiklet Model ismi : %s", honda.modelAdi);
				
		//	 Sadece yap� de�i�keninin ad�yla tan�mlanan yap�ya de�i�ken ad�n�n �zerinden eri�im
				bisikletim.turu = "Dag";
				printf("\nBisiklet turu : %s", bisikletim.turu);
				
		//	 typedef ile tan�mlanan yap�larda de�i�ken ismi �zerinden yap� �rnekleri olu�turma
				Apple Iphone13;
				Iphone13.dahiliDepolama = 128;
				printf("\nIphone13 depolama boyutu : %d", Iphone13.dahiliDepolama);
	
		
	
	return 0;
}
