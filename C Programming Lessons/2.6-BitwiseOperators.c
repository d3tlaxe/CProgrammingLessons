#include <stdio.h>

int main(){
	
	
	//	Bitwise Operators / Bitsel Operat�rler 
	/*
		&	Bitwise AND (VE Kap�s�)				
		|	Bitwise inclusive OR (VEYA Kap�s�)
		^	Bitwise exclusive OR (YADA kap�s�)
		<<	Left shift	2 bit Sola Kayd�r
		>>	Right shift 2 bit Sa�a Kayd�r
		~	T�mleyen Operator (bit de�eri bir ise s�f�ra s�f�r ise bire d�n��t�r�r >>  1001 ==> 0110)
		
	*/
	
	

    int sayi1 = 55;    				// 00110111
    int sayi2 = 48;					// 00110000
    int bitwiseSonuc = 0;           

   bitwiseSonuc = sayi1 & sayi2;       //  
   printf("Bitwise AND/VE Kap�s� Sonucu         : %d\n", bitwiseSonuc);

   bitwiseSonuc = sayi1 | sayi2;      //
   printf("Bitwise OR/VEYA Kap�s� Sonucu        : %d\n", bitwiseSonuc );
   

   bitwiseSonuc = sayi1 ^ sayi2;       //
   printf("Bitwise XOR/YA DA Kap�s� Sonucu      : %d\n", bitwiseSonuc );


   bitwiseSonuc = ~sayi1;          //
   printf("Bitwise T�mleyen Sonucu              : %d\n", bitwiseSonuc );
   
   
   bitwiseSonuc = sayi1 << 2;     //
   printf("2 bit sola kayd�r�lm�� Sonuc         : %d\n", bitwiseSonuc );

   bitwiseSonuc = sayi1 >> 2;     //
   printf("2 bit sa�a kayd�r�lm�� Sonuc         : %d\n", bitwiseSonuc );

	

	// Bitwise operatorler ile atamalar
   	/*
	   	sayi1 <<= sayi2; 	//	Sayi1 in binary �eklini sayi 2 kadar sola kayd�r�r. 
		   						Ayn� zamanda bu i�lem sayi1 in decimal de�erinin 2^sayi2 ile �arp�lmas�na e�ittir.
		   						
   		sayi1 >>= sayi2;	// 	Sayi1 in binary degerini sayi 2 kadar sa�a kayd�r�r.
   		
   		sayi1 &= sayi2; 	// 	sayi1 = sayi1 & sayi2; ifadesinin k�salt�lm�� halidir. 
		   						�nce sayi1 ve sayi2 aras�ndan bitwise AND kap�s�na g�re i�lem yapar 
								buldu�u yeni de�eri sayi1 in i�ine atar.
								
   		sayi1 |= sayi2; 	// 	sayi1 = sayi1 | sayi2; ifadesinin k�salt�lm�� halidir. 
		   						�nce sayi1 ve sayi2 aras�ndan bitwise OR kap�s�na g�re i�lem yapar 
								buldu�u yeni de�eri sayi1 in i�ine atar.
								
   		sayi1 ^= sayi2; 	// 	sayi1 = sayi1 ^ sayi2; ifadesinin k�salt�lm�� halidir. 
		   						�nce sayi1 ve sayi2 aras�ndan bitwise XOR kap�s�na g�re i�lem yapar 
								buldu�u yeni de�eri sayi1 in i�ine atar.
	*/
	
	
	return 0;
}




