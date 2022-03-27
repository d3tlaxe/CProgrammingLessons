#include <stdio.h>

//Sadece yap� ad� ile tan�mlama
struct Oyuncu{
	int konum[2];
	int id;
	char oyuncuAd[20];
	int puan;
};

//Hem yap� ad� hem de yap� de�i�kenlerinin adlar�yla birlikte tan�mlama
struct Birlik{
	int birlikId;
	struct Oyuncu oyuncular[50];
	int puan;
}Gokturks, SuperMarioBros;

//Sadece yap� de�i�keninin ad�yla tan�mlama
struct{
	int konum[2];
	int guc;
	int toplamAskeriBirim;
}MerkezKale;

//typedef anahtar kelimesini kullanarak tan�malama ve kullan�m an�nda sadece de�i�ken ismi �zerinden yap� �rnekleri olu�turma
typedef struct Kaynaklar{
	int konum[2];
	int saatlikUretim;
	int maxKaynakMiktari;	
}Tas, Odun, Altin, Demir;





int main(){
	

	
	// Tan�mlama t�rleri
		//	 Sadece yap� ad� ile tan�mlama ve kullan�m an�nda o yap� ad� �zerinden yeni de�i�ken yap�lar t�retme
				struct Oyuncu oyuncu1;
				strcpy(oyuncu1.oyuncuAd, "fr4nt");
				printf("\nOyuncu Ad : %s", oyuncu1.oyuncuAd);
	
										
														
		//	 Hem yap� ad� hem de yap� de�i�kenlerinin adlar�yla birlikte tan�mlanan yap�lara de�i�ken ad� �zerinden eri�im
				Gokturks.oyuncular[0] = oyuncu1;
				printf("\nIttifakta bulunan bir oyuncunun ismi : %s", Gokturks.oyuncular[0].oyuncuAd);
				

		
		//	 Sadece yap� de�i�keninin ad�yla tan�mlanan yap�ya de�i�ken ad�n�n �zerinden eri�im
				MerkezKale.guc = 5000000;
				MerkezKale.konum[0] = 150;
				MerkezKale.konum[1] = 150;
				printf("\nMerkez Kale Konumu (%d,%d)",MerkezKale.konum[0],MerkezKale.konum[1]);

			
				
		//	 typedef ile tan�mlanan yap�larda de�i�ken ismi �zerinden yap� �rnekleri olu�turma
				Tas tasK1;
				tasK1.konum[0] = 28;
				tasK1.konum[1] = 153;
				tasK1.saatlikUretim = 25;
				
				Tas tasK2;
				tasK2.konum[0] = 128;
				tasK2.konum[1] = 256;
				tasK2.saatlikUretim = 150;	
				
				printf("\n(%d,%d) konumunda bulunan tas kaynaginin saatlik uretimi : %d",tasK1.konum[0], tasK1.konum[1], tasK1.saatlikUretim );
	
	
	
	
	//	Pointer degisken uzerinden yapinin uyelerine erisim
	
			struct Oyuncu oyuncu5;
			strcpy(oyuncu5.oyuncuAd, "n0mb");
			
			
			
			struct Oyuncu *oyuncuPtr;
			oyuncuPtr = &oyuncu5;

			
			
			printf("\nNormal degisken statusundeki yapilarda uyelere erisim . ile yapilir : %s\n", oyuncu5.oyuncuAd);
			printf("Pointerda degisken statusundeki yapilarda uyelere erisim -> ile yapilir : %s", oyuncuPtr->oyuncuAd);

	
	
	return 0;
}
