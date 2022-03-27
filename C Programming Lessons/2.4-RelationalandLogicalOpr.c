#include <stdio.h>

int main(){

				//	Relational and Logical Operators / Ýliþkisel ve Mantýksal Operatörler			1 ve 0
	
	
	/*
		>	Büyüktür				
		<	Küçüktür
		>=	Büyük veya Eþittir
		<=	Küçük veya Eþittir
		==	Eþittir
		!=	Eþit Deðildir
		
		&&	Mantýksal Ve(AND) Hem saðýndaki hem solundaki ifadelerin doðru olmasýný gerektirir. Aksi durumda false yani 0 dönür
		||	Mantýksal Veya(OR) Yalnýzca bir ifadenin sonucunun doðru olmasý yeterlidir. 
		!	Mantýksal Deðil(NOT) Ýfadenin sonucunu tersine çevirir. 1 ise 0 0 ise 1 e döndürür.
	*/
		
  
  
  
   int sayi1 = 40,   sayi2 = 30;
   					//dogru				//yanlis
   //int sonuc = (sayi1 != sayi2) || (sayi1 < sayi2) ? sayi1 : sayi2;
   
   int sonuc = !(sayi1 < sayi2) ? sayi1 : sayi2;
   
   //int sonuc = !(sayi1 != sayi2) ? sayi1 : sayi2;
   
   printf("Beklenen Sonuc : %d", sonuc);


	return 0;
}









