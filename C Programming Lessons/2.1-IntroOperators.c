#include <stdio.h>

int main(){

		//										OPERATORS / OPERATÖRLER
	
		//	Arithmetic Operators / Aritmetik Operatörler
	/*
		+	Toplama
		-	Çýkarma
		*	Çarpma
		/	Bölme
		%	Mod Alma
	*/
	
	
	

		//	Assignment Operators and Expressions / Atama Operatörleri ve Ýfadeler
	/*
		sayi1 = sayi2;   // Basit atama operatorüdür. 
							Saðdaki ifadeyi alýp soldakinin içine atar.

	   	sayi1 += sayi2;  // sayi1 = sayi1 + sayi2; ifadesinin kýsaltýlmýþ versiyonudur. 
		   					Sayi1 ve sayi2 yi toplar bulduðu deðeri sayi1 içine atar.
		   				
	   	sayi1 -= sayi2;  // sayi1 = sayi1 - sayi2; ifadesinin kýsaltýlmýþ versiyonudur. 
		   					Sayi1 den sayi2 yi çýkartýr bulduðu deðeri sayi1 içine atar.
		   					
	   	sayi1 *= sayi2;  // sayi1 = sayi1 * sayi2; ifadesinin kýsaltýlmýþ versiyonudur. 
		   					Sayi1 ve sayi2 yi çarpar bulduðu deðeri sayi1 içine atar.
		   					
	   	sayi1 /= sayi2;  // sayi1 = sayi1 / sayi2; ifadesinin kýsaltýlmýþ versiyonudur. 
		   					Sayi1 i sayi2 ye böler iþlemden dönen bölümü sayi1 içine atar bulduðu deðeri sayi1 içine atar.
		   					
	   	sayi1 %= sayi2;  // sayi1 = sayi1 % sayi2; ifadesinin kýsaltýlmýþ versiyonudur. 
		   					Sayi1 i sayi2 ye böler. Bölme iþleminden kalaný sayi1 içine atar.	
	*/
	





	
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
	
	
	
	
	
		//	Increment and Decrement Operators / Artýrma ve Azaltma Operatörleri
	/*
		++	1 arttýrýr				
		--	1 azaltýr
		
				Önemli
				Arttýrma ve azaltma operatörleri deðiþkenin önünde ya da arkasýnda olma durumuna göre deðiþik yapýda çalýþýr!!
				prefix and postfix
	*/
	
	
	
	
	
	
		//	Bitwise Operators / Bitsel Operatörler 
	/*
		&	Bitwise AND (VE Kapýsý)				
		|	Bitwise inclusive OR (VEYA Kapýsý)
		^	Bitwise exclusive OR (YADA kapýsý)
		<<	Left shift	2 bit Sola Kaydýr
		>>	Right shift 2 bit Saða Kaydýr
		~	Tümleyen Operator (bit deðeri bir ise sýfýra sýfýr ise bire dönüþtürür >>  1001 ==> 0110)
		
	*/
	
	
	
	
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
	
	
	
	
	
	   // Conditional Expressions / Koþullu Ýdadeler
   
   //  " ? " Koþullu bir þekilde atama yapmamýzý saðlayan bir yapý için kullanýlýr. 
   
   // kontrolEdilenDurum ? dogruysaAtananDeger : YanlýssaAtananDeger
   int yas1 = 25,   yas2 = 30;
   int buyukOlan = (yas1 > yas2) ? yas1 : yas2;
   
   printf("Buyuk olan Yas : %d", buyukOlan);
	
	
	
	return 0;
}


