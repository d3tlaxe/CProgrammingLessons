#include <stdio.h>

int main()
{
    //              Loops / D�ng�ler

    /*
    
        Yaz�lan kod bloklar�n�n �artlar sa�land��� s�rece tekrar edilmesini sa�layan yap�lara d�ng� diyoruz. 
        
            3 tip d�ng� t�r� vard�r:
                - for d�ng�s�
                - while d�ng�s�
                - do while d�ng�s� 
                
    
            D�ng� mant���nda temel olarak 3 ��e vard�r. 
            Bunlar:
                - Dongu baslamas�n� saglayabilecek bir durum
                - D�ng�n�n bitmesine neden olacak bir durum
                - Dongu sart�n� kontrol edecek ifade
            
    */
    
    
    
               					//for d�ng�s� yap�s�
    
    /*
            for(baslang�cDeger  ; SartBlogu  ; Art�sDegeri ){
                // �artlar sa�land��� s�rece tekrar tekrar yap�lacak i�lemler
            }
    
    */
/*
	int i;
	 	for(i = 0   ;  i < 10   ; i++){
			printf("Ben %d. kez yaziyorum\n", (i+1));
		}		           
    
    
    
               					//while d�ng�s� yap�s�
    
    /*
            while(sartBlogu){
                sart sa�land��� surece tekrar tekrar yap�lacak i�lemler
                Dongu �art�nda art�� ya da azal�� gibi de�i�iklik belirtilmezse sonsuz d�ng� 
            }
    
    */
 /*  
    int sayi1 = 5, sayi2 = 35;
        while(sayi1 < sayi2){
            printf("Ben yaziyorum\n");		   
            sayi1++;
        }            
    
*/    
    
    
              					//dowhile d�ng�s� yap�s�
    
    /*
            do{
                - Program yukar�dan a�a��ya do�ru akarken buraya geldi�inde �nce d�ng� i�erisindeki kodlar 1 kere �al���r
                	Sonra d�ng� �art�n� kontrol eder. �art sa�lan�yorsa d�ng�y� tekrar terkar �al��t�r�r. 
                
                - While d�ng�s� ile dowhile d�ng�s�n�n temel fark� while d�ng�s� �al��madan �nce �art� kontrol eder. 
                	�art sa�lanm�yorsa d�ng�ye hi� girmez. Ancak do while d�ng�s� ilk �al��ma an�nda �art� kontrol etmez.
                	1 kere �al���r d�ng� �art�n� ondan sonra kontrol eder ve �art sa�lan�yorsa �al��maya devam eder.
            }while(sartBlogu);
    
    */

 		int sayi1 = 5, sayi2 = 35;
        do{
            printf("Ben yaziyorum\n");
        }while(sayi1 != sayi2);          
    

}
