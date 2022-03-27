#include <stdio.h>

int main(){

			//	Assignment Operators and Expressions / Atama Operatörleri ve İfadeler
		
	int sayi = 10;
	int sayi2 = 20;
	int sonuc;
	

	//sonuc = 0;	
	sonuc = sayi + sayi2;  	// 	Basit atama operatorüdür. Sağdaki ifadeyi alıp soldakinin içine atar.
	//sonuc = 30;
	printf("sonuc degeri : %d\n", sonuc);
						
						
	//sonuc += sayi   --->  sonuc = sonuc + sayi;
	sonuc += sayi; 	/* 	sonuc = sonuc + sayi; ifadesinin kısaltılmış versiyonudur. 
		   						sonuc ve sayi yi toplar bulduğu değeri sonuc içine atar.	*/
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





		   // Conditional Expressions / Koşullu İdadeler
   
   //  " ? " Koşullu bir şekilde atama yapmamızı sağlayan bir yapı için kullanılır. 
   
	
	
	
	// kontrolEdilenDurum ? dogruysaAtananDeger : YanlıssaAtananDeger
	
   int yas1 = 45, yas2 = 30;
   
   int buyukOlanYas = (yas1 > yas2) ? yas1 : yas2;
   
   printf("\n\n\n\n\n\n\n\nBuyuk olan Yas : %d", buyukOlanYas);






	return 0;
}






