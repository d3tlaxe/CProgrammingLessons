#include <stdio.h>

main() {
    
        // �f else i�erisinde bir tanesini yakalad�ysa onu uygular di�erlerine bakmaz !!
    
                              // Ko�ulland�rma Yap�lar�
    
    // if else Yap�s� 
    
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
//�f blo�u d���na ��k�larak buradan devam edilir. 
    
    

        
                // �ki say�dan b�y�k olan� ekrana yazd�rmak
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
    
    
 
                // Ayn� i�lemi say�lar� kullan�c�dan alarak yapmak
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
