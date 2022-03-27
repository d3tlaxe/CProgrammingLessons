#include <stdio.h>


main(){
    
    
    // switch case Yapýsý
    
        /*
                Genellikle sayýsal deðerler arasýndan bir tanesi uygulanacaksa kullanýlmasý uygundur.
                Dikkat!!!
                break deyimi kullanýlmazsa bütün case leri uygular.
                
        */
    
    
    int sayi1, sayi2, sonuc;
    printf("\nBirinci Sayiyi giriniz : \n");
    scanf("%d", &sayi1);
    printf("ikinci Sayiyi giriniz : \n");
    scanf("%d", &sayi2);
    
    
    printf("\n\nLütfen yapmak istediginiz islem numarasýný giriniz\n");
    printf("1. Toplama\n");
    printf("2. Cýkarma\n");
    printf("3. Carpma\n");
    printf("4. Bolme\n");
    int secimDegeri;
    scanf("%d", &secimDegeri);
    
    
       switch (secimDegeri) {
             case 1: 
                sonuc = sayi1 + sayi2;
             case 2: 
                sonuc = sayi1 - sayi2;
             case 3: 
                sonuc = sayi1 * sayi2;
             case 4: 
                sonuc = sayi1 / sayi2;
                break;
             default: 
                break;
           
       } 
           printf("Sonuc : %d", sonuc);
}

 
