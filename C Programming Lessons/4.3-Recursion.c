#include <stdio.h>


int degerAl();

int main(){
	
    int gelenDeger = degerAl();
    
    printf("Secilen Sayi : %d", gelenDeger);

    
    return 0;
}


int degerAl(){
    
    int gelenSayi;
    printf("Lutfen 0 ile 10 arasinda bir sayi giriniz : ");
    scanf("%d",&gelenSayi);
    
    if(gelenSayi > 0 && gelenSayi < 10){
    	
        return gelenSayi;
    }else{
    	printf("Secim yapilamadi!!!\n");
        degerAl();
    }
}

