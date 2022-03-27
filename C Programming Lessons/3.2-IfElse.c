#include <stdio.h>

main() {
    
        // Ýf else içerisinde bir tanesini yakaladýysa onu uygular diðerlerine bakmaz !!
    
                              // Koþullandýrma Yapýlarý
    
    // if else Yapýsý 
    
    int sayi = 38;
    
    if(sayi < 10){
    	printf("10 dan kucuk");
	}else if(sayi == 23){
		printf("23 e esit");
	}else if(sayi > 34){
		printf("34 den buyuk");
	}else if(sayi > 11){
		printf("11 den buyuk");
	}else{
		printf("sartlarin hicbiri saglanmadi");
	}
//Ýf bloðu dýþýna çýkýlarak buradan devam edilir. 
    
    

        
                // Ýki sayýdan büyük olaný ekrana yazdýrmak
        int sayi1 = 450, sayi2 = 30, buyukSayi;
        
        if(sayi1 < sayi2){
            buyukSayi = sayi2;
            printf("\nBuyuk olan sayinin degeri : %d", buyukSayi);
        }else{
            buyukSayi = sayi1;
            printf("\nBuyuk olan sayinin degeri : %d", buyukSayi);
        }
    

		int yas = 0;
		printf("\nSuanki yas : %d", yas);
		printf("\nLutfen Yasinizi Giriniz :");
   		scanf("%d", &yas);
   		printf("\nSon durumdaki yas : %d", yas);
    
    
 
                // Ayný iþlemi sayýlarý kullanýcýdan alarak yapmak
        int sayi3, sayi4;
        printf("\nLutfen ilk sayiyi giriniz :\n");
        scanf("%d",&sayi3);
        printf("Lutfen ikinci sayiyi giriniz :\n");
        scanf("%d",&sayi4);
        int buyukSayi2;
        if(sayi3 < sayi4){
            buyukSayi2 = sayi4;
            printf("Buyuk olan sayinin degeri : %d", buyukSayi2);
        }else{
            buyukSayi2 = sayi3;
            printf("Buyuk olan sayinin degeri : %d", buyukSayi2);
        }
        
}
