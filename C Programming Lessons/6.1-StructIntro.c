#include <stdio.h>

//Sadece yapý adý ile tanýmlama
struct araba{
	int hiz;
	float fiyat;
	int yolcuKapasitesi;
	char *turu;
	int modelYili;
};

//Hem yapý adý hem de yapý deðiþkenlerinin adlarýyla birlikte tanýmlama
struct motor{
	int hiz;
	float fiyat;
	char *turu;
	char *modelAdi;
}honda, kawasaki, yamaha, suzuki;

//Sadece yapý deðiþkeninin adýyla tanýmlama
struct{
	int vites;
	int kadroBoyu;
	char *turu;
	char *frenTuru;	
}bisikletim;


//typedef anahtar kelimesini kullanarak tanýmalama ve kullaným anýnda sadece deðiþken ismi üzerinden yapý örnekleri oluþturma
typedef struct telefonlar{
	float fiyat;
	int modelYili;
	int ram;
	int dahiliDepolama;
}Huawei, Samsung, Apple, Xiaomi;





int main(){
	
	//	Farklý veri türlerini bir araya getirerek yeni bir veri türü gibi kullanmamýza yarar
	
	// Tanýmlama türleri
		//	 Sadece yapý adý ile tanýmlama ve kullaným anýnda o yapý adý üzerinden yeni deðiþken yapýlar türetme
				struct araba mustang;
				mustang.modelYili = 1967;
				printf("\nMustang Model Yili : %d", mustang.modelYili);
										
														
		//	 Hem yapý adý hem de yapý deðiþkenlerinin adlarýyla birlikte tanýmlanan yapýlara deðiþken adý üzerinden eriþim
				honda.modelAdi = "Africa Twin";
				printf("\nHonda Motosiklet Model ismi : %s", honda.modelAdi);
				
		//	 Sadece yapý deðiþkeninin adýyla tanýmlanan yapýya deðiþken adýnýn üzerinden eriþim
				bisikletim.turu = "Dag";
				printf("\nBisiklet turu : %s", bisikletim.turu);
				
		//	 typedef ile tanýmlanan yapýlarda deðiþken ismi üzerinden yapý örnekleri oluþturma
				Apple Iphone13;
				Iphone13.dahiliDepolama = 128;
				printf("\nIphone13 depolama boyutu : %d", Iphone13.dahiliDepolama);
	
		
	
	return 0;
}
