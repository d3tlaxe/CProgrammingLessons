#include <stdio.h>

int main(){

				//	Relational and Logical Operators / �li�kisel ve Mant�ksal Operat�rler			1 ve 0
	
	
	/*
		>	B�y�kt�r				
		<	K���kt�r
		>=	B�y�k veya E�ittir
		<=	K���k veya E�ittir
		==	E�ittir
		!=	E�it De�ildir
		
		&&	Mant�ksal Ve(AND) Hem sa��ndaki hem solundaki ifadelerin do�ru olmas�n� gerektirir. Aksi durumda false yani 0 d�n�r
		||	Mant�ksal Veya(OR) Yaln�zca bir ifadenin sonucunun do�ru olmas� yeterlidir. 
		!	Mant�ksal De�il(NOT) �fadenin sonucunu tersine �evirir. 1 ise 0 0 ise 1 e d�nd�r�r.
	*/
		
  
  
  
   int sayi1 = 40,   sayi2 = 30;
   					//dogru				//yanlis
   //int sonuc = (sayi1 != sayi2) || (sayi1 < sayi2) ? sayi1 : sayi2;
   
   int sonuc = !(sayi1 < sayi2) ? sayi1 : sayi2;
   
   //int sonuc = !(sayi1 != sayi2) ? sayi1 : sayi2;
   
   printf("Beklenen Sonuc : %d", sonuc);


	return 0;
}









