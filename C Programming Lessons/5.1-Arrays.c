#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish");
	

	//	Dizi nedir ne i�e yarar
		// Ayn� t�rden de�i�kenleri tuttu�umuz veri tipine array/dizi diyoruz.
		
	
	// veriTipi diziAdi[boyut];
	
	float sayi;
	
	int sayilar[5];
	
	int intDizisi[] = {45,23,14,2};
	/*
		Dizi tan�mlan�rken boyutu belirtilmelidir.		int dizi[5];
		Tan�mlan�rken atama yap�l�rsa boyut belirtmeye gerek yok. 		int dizi[] = {1,2,3,4,5};
	*/	
	
	//	Dizi tan�mland�ktan sonra de�erleri atan�yor
	int ilkDizim[6];
	
	ilkDizim[0] = 455;
	printf("Dizimin �lk degeri : %d", ilkDizim[0]);
	ilkDizim[1] = 3;
	ilkDizim[2] = 4;
	ilkDizim[3] = 6;
	ilkDizim[4] = 1;
	ilkDizim[5] = 2;
	printf("Dizimin �lk degeri : %d", ilkDizim[1]);
	
	
	
	
	//	Dizi tan�mlan�rken de�erleri atan�yor.
	int ikinciDizim[6] = {5,3,4,6,1,2};
	




	// Karakter dizisi �rnek	// String
	char isim[5] = "mehmet";
	printf("\nisim : %s", isim);
	
	
	
	
	
	//	�ok Boyutlu diziler
	int coklu[2][4] = {{4,2,8,9},{3,5,8,7}};
	
	// excel �zerinde g�sterilecek

	
	
	return 0;
}
