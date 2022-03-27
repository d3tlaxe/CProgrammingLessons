#include <stdio.h>

int main()
{
    //              Loops / Döngüler

    /*
    
        Yazýlan kod bloklarýnýn þartlar saðlandýðý sürece tekrar edilmesini saðlayan yapýlara döngü diyoruz. 
        
            3 tip döngü türü vardýr:
                - for döngüsü
                - while döngüsü
                - do while döngüsü 
                
    
            Döngü mantýðýnda temel olarak 3 öðe vardýr. 
            Bunlar:
                - Dongu baslamasýný saglayabilecek bir durum
                - Döngünün bitmesine neden olacak bir durum
                - Dongu sartýný kontrol edecek ifade
            
    */
    
    
    
               					//for döngüsü yapýsý
    
    /*
            for(baslangýcDeger  ; SartBlogu  ; ArtýsDegeri ){
                // þartlar saðlandýðý sürece tekrar tekrar yapýlacak iþlemler
            }
    
    */
/*
	int i;
	 	for(i = 0   ;  i < 10   ; i++){
			printf("Ben %d. kez yaziyorum\n", (i+1));
		}		           
    
    
    
               					//while döngüsü yapýsý
    
    /*
            while(sartBlogu){
                sart saðlandýðý surece tekrar tekrar yapýlacak iþlemler
                Dongu þartýnda artýþ ya da azalýþ gibi deðiþiklik belirtilmezse sonsuz döngü 
            }
    
    */
 /*  
    int sayi1 = 5, sayi2 = 35;
        while(sayi1 < sayi2){
            printf("Ben yaziyorum\n");		   
            sayi1++;
        }            
    
*/    
    
    
              					//dowhile döngüsü yapýsý
    
    /*
            do{
                - Program yukarýdan aþaðýya doðru akarken buraya geldiðinde önce döngü içerisindeki kodlar 1 kere çalýþýr
                	Sonra döngü þartýný kontrol eder. Þart saðlanýyorsa döngüyü tekrar terkar çalýþtýrýr. 
                
                - While döngüsü ile dowhile döngüsünün temel farký while döngüsü çalýþmadan önce þartý kontrol eder. 
                	Þart saðlanmýyorsa döngüye hiç girmez. Ancak do while döngüsü ilk çalýþma anýnda þartý kontrol etmez.
                	1 kere çalýþýr döngü þartýný ondan sonra kontrol eder ve þart saðlanýyorsa çalýþmaya devam eder.
            }while(sartBlogu);
    
    */

 		int sayi1 = 5, sayi2 = 35;
        do{
            printf("Ben yaziyorum\n");
        }while(sayi1 != sayi2);          
    

}
