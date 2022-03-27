#include <stdio.h>
#include <string.h>


int main(){

/*
	char sehir[5];
	char sehir2[] = {'a','n','k','a','r','a','\0'};   // End of String  \0
	
	
	printf("\nilk deger : %s", sehir);
	strcpy(sehir,"bursa");
	printf("\nson deger : %s", sehir);
	
	strcat(sehir,"16");
	printf("\n ilave edilmiþ deger : %s", sehir);
	
	printf("\ndizi uzunlugu : %d", strlen(sehir2));
*/	
	char sozcuk[15];
/*	printf("Bir kelime girin : ");
	scanf("%s", sozcuk);
	printf("alinan kelime : %s", sozcuk);
	
	printf("\nBir cumle girin : ");
	gets(sozcuk);
	printf("\n gets ile alinan cumle : %s", sozcuk);
	
*/


/*
	char harfler[] = "slkdjflks";
	
	printf("\n harfler metin icerigi : %s", harfler);
	printf("\n metnin adresi  : %p", &harfler);
	printf("\n metindeki ilk karakterin adresi : %p", &harfler[0]);

*/	
	
	//ortalamaAl();
	
	
	
	// 2 satýr 3 sütün ve her sütunda 4 integer sayý olacak þekilde tabloyu ekrana bastýr. int tablo[2][3][4];

	int tablom[2][3][4] = {{{4,5,6,7},{1,2,4,5},{7,8,5,4}},{{8,5,2,6},{6,5,8,7},{9,5,1,4}}};
	
	int i,j,k;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("| ");
			for(k=0; k<4; k++){
				printf("%d ",tablom[i][j][k]);
			}
			printf(" |");
		}
		printf("\n");
	}
	
	
	return 0;

}



void ortalamaAl(){
	
	float sayilar[5];
	int i;
	for(i=0; i<5; i++){
		printf("Lutfen bir sayi giriniz: ");
		scanf("%f", &sayilar[i]);
	}
	
	float toplam;
	for(i=0; i<5; i++){
		toplam += sayilar[i];
	}
	printf("Ortlama deger : %f", (toplam/5));
}




