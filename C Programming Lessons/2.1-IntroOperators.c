#include <stdio.h>

int main(){

		//										OPERATORS / OPERAT�RLER
	
		//	Arithmetic Operators / Aritmetik Operat�rler
	/*
		+	Toplama
		-	��karma
		*	�arpma
		/	B�lme
		%	Mod Alma
	*/
	
	
	

		//	Assignment Operators and Expressions / Atama Operat�rleri ve �fadeler
	/*
		sayi1 = sayi2;   // Basit atama operator�d�r. 
							Sa�daki ifadeyi al�p soldakinin i�ine atar.

	   	sayi1 += sayi2;  // sayi1 = sayi1 + sayi2; ifadesinin k�salt�lm�� versiyonudur. 
		   					Sayi1 ve sayi2 yi toplar buldu�u de�eri sayi1 i�ine atar.
		   				
	   	sayi1 -= sayi2;  // sayi1 = sayi1 - sayi2; ifadesinin k�salt�lm�� versiyonudur. 
		   					Sayi1 den sayi2 yi ��kart�r buldu�u de�eri sayi1 i�ine atar.
		   					
	   	sayi1 *= sayi2;  // sayi1 = sayi1 * sayi2; ifadesinin k�salt�lm�� versiyonudur. 
		   					Sayi1 ve sayi2 yi �arpar buldu�u de�eri sayi1 i�ine atar.
		   					
	   	sayi1 /= sayi2;  // sayi1 = sayi1 / sayi2; ifadesinin k�salt�lm�� versiyonudur. 
		   					Sayi1 i sayi2 ye b�ler i�lemden d�nen b�l�m� sayi1 i�ine atar buldu�u de�eri sayi1 i�ine atar.
		   					
	   	sayi1 %= sayi2;  // sayi1 = sayi1 % sayi2; ifadesinin k�salt�lm�� versiyonudur. 
		   					Sayi1 i sayi2 ye b�ler. B�lme i�leminden kalan� sayi1 i�ine atar.	
	*/
	





	
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
	
	
	
	
	
		//	Increment and Decrement Operators / Art�rma ve Azaltma Operat�rleri
	/*
		++	1 artt�r�r				
		--	1 azalt�r
		
				�nemli
				Artt�rma ve azaltma operat�rleri de�i�kenin �n�nde ya da arkas�nda olma durumuna g�re de�i�ik yap�da �al���r!!
				prefix and postfix
	*/
	
	
	
	
	
	
		//	Bitwise Operators / Bitsel Operat�rler 
	/*
		&	Bitwise AND (VE Kap�s�)				
		|	Bitwise inclusive OR (VEYA Kap�s�)
		^	Bitwise exclusive OR (YADA kap�s�)
		<<	Left shift	2 bit Sola Kayd�r
		>>	Right shift 2 bit Sa�a Kayd�r
		~	T�mleyen Operator (bit de�eri bir ise s�f�ra s�f�r ise bire d�n��t�r�r >>  1001 ==> 0110)
		
	*/
	
	
	
	
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
	
	
	
	
	
	   // Conditional Expressions / Ko�ullu �dadeler
   
   //  " ? " Ko�ullu bir �ekilde atama yapmam�z� sa�layan bir yap� i�in kullan�l�r. 
   
   // kontrolEdilenDurum ? dogruysaAtananDeger : Yanl�ssaAtananDeger
   int yas1 = 25,   yas2 = 30;
   int buyukOlan = (yas1 > yas2) ? yas1 : yas2;
   
   printf("Buyuk olan Yas : %d", buyukOlan);
	
	
	
	return 0;
}


