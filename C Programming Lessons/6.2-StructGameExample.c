#include <stdio.h>

//Sadece yapý adý ile tanýmlama
struct Oyuncu{
	int konum[2];
	int id;
	char oyuncuAd[20];
	int puan;
};

//Hem yapý adý hem de yapý deðiþkenlerinin adlarýyla birlikte tanýmlama
struct Birlik{
	int birlikId;
	struct Oyuncu oyuncular[50];
	int puan;
}Gokturks, SuperMarioBros;

//Sadece yapý deðiþkeninin adýyla tanýmlama
struct{
	int konum[2];
	int guc;
	int toplamAskeriBirim;
}MerkezKale;

//typedef anahtar kelimesini kullanarak tanýmalama ve kullaným anýnda sadece deðiþken ismi üzerinden yapý örnekleri oluþturma
typedef struct Kaynaklar{
	int konum[2];
	int saatlikUretim;
	int maxKaynakMiktari;	
}Tas, Odun, Altin, Demir;





int main(){
	

	
	// Tanýmlama türleri
		//	 Sadece yapý adý ile tanýmlama ve kullaným anýnda o yapý adý üzerinden yeni deðiþken yapýlar türetme
				struct Oyuncu oyuncu1;
				strcpy(oyuncu1.oyuncuAd, "fr4nt");
				printf("\nOyuncu Ad : %s", oyuncu1.oyuncuAd);
	
										
														
		//	 Hem yapý adý hem de yapý deðiþkenlerinin adlarýyla birlikte tanýmlanan yapýlara deðiþken adý üzerinden eriþim
				Gokturks.oyuncular[0] = oyuncu1;
				printf("\nIttifakta bulunan bir oyuncunun ismi : %s", Gokturks.oyuncular[0].oyuncuAd);
				

		
		//	 Sadece yapý deðiþkeninin adýyla tanýmlanan yapýya deðiþken adýnýn üzerinden eriþim
				MerkezKale.guc = 5000000;
				MerkezKale.konum[0] = 150;
				MerkezKale.konum[1] = 150;
				printf("\nMerkez Kale Konumu (%d,%d)",MerkezKale.konum[0],MerkezKale.konum[1]);

			
				
		//	 typedef ile tanýmlanan yapýlarda deðiþken ismi üzerinden yapý örnekleri oluþturma
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
