#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish");
	

	//	Dizi nedir ne iþe yarar
		// Ayný türden deðiþkenleri tuttuðumuz veri tipine array/dizi diyoruz.
		
	
	// veriTipi diziAdi[boyut];
	
	float sayi;
	
	int sayilar[5];
	
	int intDizisi[] = {45,23,14,2};
	/*
		Dizi tanýmlanýrken boyutu belirtilmelidir.		int dizi[5];
		Tanýmlanýrken atama yapýlýrsa boyut belirtmeye gerek yok. 		int dizi[] = {1,2,3,4,5};
	*/	
	
	//	Dizi tanýmlandýktan sonra deðerleri atanýyor
	int ilkDizim[6];
	
	ilkDizim[0] = 455;
	printf("Dizimin Ýlk degeri : %d", ilkDizim[0]);
	ilkDizim[1] = 3;
	ilkDizim[2] = 4;
	ilkDizim[3] = 6;
	ilkDizim[4] = 1;
	ilkDizim[5] = 2;
	printf("Dizimin Ýlk degeri : %d", ilkDizim[1]);
	
	
	
	
	//	Dizi tanýmlanýrken deðerleri atanýyor.
	int ikinciDizim[6] = {5,3,4,6,1,2};
	




	// Karakter dizisi örnek	// String
	char isim[5] = "mehmet";
	printf("\nisim : %s", isim);
	
	
	
	
	
	//	Çok Boyutlu diziler
	int coklu[2][4] = {{4,2,8,9},{3,5,8,7}};
	
	// excel üzerinde gösterilecek

	
	
	return 0;
}
