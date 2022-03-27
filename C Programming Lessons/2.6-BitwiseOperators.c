#include <stdio.h>

int main(){
	
	
	//	Bitwise Operators / Bitsel Operatörler 
	/*
		&	Bitwise AND (VE Kapýsý)				
		|	Bitwise inclusive OR (VEYA Kapýsý)
		^	Bitwise exclusive OR (YADA kapýsý)
		<<	Left shift	2 bit Sola Kaydýr
		>>	Right shift 2 bit Saða Kaydýr
		~	Tümleyen Operator (bit deðeri bir ise sýfýra sýfýr ise bire dönüþtürür >>  1001 ==> 0110)
		
	*/
	
	

    int sayi1 = 55;    				// 00110111
    int sayi2 = 48;					// 00110000
    int bitwiseSonuc = 0;           

   bitwiseSonuc = sayi1 & sayi2;       //  
   printf("Bitwise AND/VE Kapýsý Sonucu         : %d\n", bitwiseSonuc);

   bitwiseSonuc = sayi1 | sayi2;      //
   printf("Bitwise OR/VEYA Kapýsý Sonucu        : %d\n", bitwiseSonuc );
   

   bitwiseSonuc = sayi1 ^ sayi2;       //
   printf("Bitwise XOR/YA DA Kapýsý Sonucu      : %d\n", bitwiseSonuc );


   bitwiseSonuc = ~sayi1;          //
   printf("Bitwise Tümleyen Sonucu              : %d\n", bitwiseSonuc );
   
   
   bitwiseSonuc = sayi1 << 2;     //
   printf("2 bit sola kaydýrýlmýþ Sonuc         : %d\n", bitwiseSonuc );

   bitwiseSonuc = sayi1 >> 2;     //
   printf("2 bit saða kaydýrýlmýþ Sonuc         : %d\n", bitwiseSonuc );

	

	// Bitwise operatorler ile atamalar
   	/*
	   	sayi1 <<= sayi2; 	//	Sayi1 in binary þeklini sayi 2 kadar sola kaydýrýr. 
		   						Ayný zamanda bu iþlem sayi1 in decimal deðerinin 2^sayi2 ile çarpýlmasýna eþittir.
		   						
   		sayi1 >>= sayi2;	// 	Sayi1 in binary degerini sayi 2 kadar saða kaydýrýr.
   		
   		sayi1 &= sayi2; 	// 	sayi1 = sayi1 & sayi2; ifadesinin kýsaltýlmýþ halidir. 
		   						Önce sayi1 ve sayi2 arasýndan bitwise AND kapýsýna göre iþlem yapar 
								bulduðu yeni deðeri sayi1 in içine atar.
								
   		sayi1 |= sayi2; 	// 	sayi1 = sayi1 | sayi2; ifadesinin kýsaltýlmýþ halidir. 
		   						Önce sayi1 ve sayi2 arasýndan bitwise OR kapýsýna göre iþlem yapar 
								bulduðu yeni deðeri sayi1 in içine atar.
								
   		sayi1 ^= sayi2; 	// 	sayi1 = sayi1 ^ sayi2; ifadesinin kýsaltýlmýþ halidir. 
		   						Önce sayi1 ve sayi2 arasýndan bitwise XOR kapýsýna göre iþlem yapar 
								bulduðu yeni deðeri sayi1 in içine atar.
	*/
	
	
	return 0;
}




