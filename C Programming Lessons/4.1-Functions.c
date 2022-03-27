#include <stdio.h>

void bilgiVer();
int sayiUret();
void hosgeldinMesaji(char isim[]);
int topla(int sayi1, int sayi2);


int main(){
	
		/*
				DonusTipi	FonksiyonAdi(Parametreler){	
						//Fonksiyonun yapacaði iþlemlere ait kodlar
						
						
						//Dönüþ tipi varsayýlan olarak int tir.
							
						
						return dondurulenDeger;	
				}	
		*/
		
		
		// Temelde 4 tip fonksiyon yapýsý vardýr
		/*	-	Parametre almayan deger dondurmeyen
			-	Parametre almayan deger donduren
			-	Parametre alan deger dondurmeyen
			-	Parametre alan deger donduren	
		*/
		// bilgiVer();
		
	
		
		
		
		int uretilenSayi = sayiUret();
		printf("Uretilen Sayi : %d\n", uretilenSayi);
		
		
		//hosgeldinMesaji("Huseyin");
		
		//int gelenToplam = topla(342, 388);
		
		//printf("\nGelen Toplam : %d", sayiGonder());
	
	return 0;
}




//Parametre almayan deger dondurmeyen 
void bilgiVer(){
	printf("Veri Transferi Tamamlandi!!!\n");	
}










//Parametre almayan deger donduren
int sayiGonder(){
	
	int sayi = 256;
	return sayi;
}

int sayiUret(){
	
	//1 Ocak 1970 tarihinden þuana kadar gecen zamaný toplam saniye cinsinden alýyoruz		// Epoch Time
	time_t gecenSure;
	gecenSure = time (NULL);
	
	//Bu saniye degerinin son hanesindeki degere ulasmak icin 10 a bolumundan kalani buluyoruz.
	int rastgeleSayi = (gecenSure%10);
	
	//Bu degeri dönduruyoruz. 
	return rastgeleSayi;
}



//Parametre alan deger dondurmeyen
void hosgeldinMesaji(char isim[]){
	
	printf("Hos geldin %s",isim);
}






//Parametre alan deger donduren
int topla(int sayi1, int sayi2){
	int toplam;
	toplam = sayi1 + sayi2;
	return toplam;
}
