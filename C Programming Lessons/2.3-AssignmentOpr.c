#include <stdio.h>

int main(){

			//	Assignment Operators and Expressions / Atama Operat�rleri ve �fadeler
		
	int sayi = 10;
	int sayi2 = 20;
	int sonuc;
	

	//sonuc = 0;	
	sonuc = sayi + sayi2;  	// 	Basit atama operator�d�r. Sa�daki ifadeyi al�p soldakinin i�ine atar.
	//sonuc = 30;
	printf("sonuc degeri : %d\n", sonuc);
						
						
	//sonuc += sayi   --->  sonuc = sonuc + sayi;
	sonuc += sayi; 	/* 	sonuc = sonuc + sayi; ifadesinin k�salt�lm�� versiyonudur. 
		   						sonuc ve sayi yi toplar buldu�u de�eri sonuc i�ine atar.	*/
	//sonuc = 40;
	printf("sonuc degeri : %d\n", sonuc);   
	
	
	//sonuc = 40;	
	sonuc -= sayi; 	/*	sonuc = sonuc - sayi;	*/
	//sonuc = 30;
	printf("sonuc degeri : %d\n", sonuc); 
	
	
	//sonuc = 30;	  					
	sonuc *= sayi; 	/*	sonuc = sonuc * sayi; */
	//sonuc = 300;
	printf("sonuc degeri : %d\n", sonuc); 
	
	
	//sonuc = 300;	   					
	sonuc /= sayi; 	/*	sonuc = sonuc / sayi; */
	
	//sonuc = 30;
	printf("sonuc degeri : %d\n", sonuc); 
	
	
	//sonuc = 30;	   					
	sonuc %= sayi;		/*	sonuc = sonuc % sayi; */	
	//sonuc = 0;
	printf("sonuc degeri : %d\n", sonuc); 





		   // Conditional Expressions / Ko�ullu �dadeler
   
   //  " ? " Ko�ullu bir �ekilde atama yapmam�z� sa�layan bir yap� i�in kullan�l�r. 
   
	
	
	
	// kontrolEdilenDurum ? dogruysaAtananDeger : Yanl�ssaAtananDeger
	
   int yas1 = 45, yas2 = 30;
   
   int buyukOlanYas = (yas1 > yas2) ? yas1 : yas2;
   
   printf("\n\n\n\n\n\n\n\nBuyuk olan Yas : %d", buyukOlanYas);






	return 0;
}






