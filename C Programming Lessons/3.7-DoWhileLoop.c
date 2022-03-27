#include <stdio.h>

int main()
{
	
	
			/*				Basit Hesap Makinesi do While Loop örneði				*/
	
	
    int kontrol = 1;	// while dongusu 0 degerini false diger butun sayilari true görüyor
    int sayi1, sayi2, sonuc, islem;
    
    do{
        printf("\n\n\t\t\t___Hesap Makinesine Hos Geldiniz___\t\t\t\n\n\n");
        printf("Lutfen 1. sayiyi giriniz : ");
        scanf("%d", &sayi1);
        printf("\nLutfen 2. sayiyi giriniz : ");
        scanf("%d", &sayi2);
        
        printf("\n\nIslem Listesi");
        printf("\n1- Toplama\n");
        printf("2- Cikarma\n");
        printf("3- Carpma\n");
        printf("4- Bolme \n");
        printf("\n\nLutfen Yapmak istediginiz islemi seciniz :");
        scanf("%d",&islem);
        
        switch(islem){
            case 1:
                sonuc = sayi1 + sayi2;
                break;
            case 2:
                sonuc = sayi1 - sayi2;
                break;
            case 3:
                sonuc = sayi1 * sayi2;
                break;
            case 4:
                sonuc = sayi1 / sayi2;
                break;
            default:
                printf("Islem Degerini Yanlis Sectiniz !!!");
                break;
        }
        
        printf("\nSonuc : %d\n\n", sonuc);
        printf("\nCikmak icin 0'a basin. Devam etmek icin farkli bir sayi giriniz...\n");
        scanf("%d",&kontrol);
    }while(kontrol);

    return 0;
}
