#include <stdio.h>

int main(){
	
		/*	Go to Deyiminin Kullanýmý	*/
	
	
	int sayi, toplam;
	
	durak:		//label etiket
	printf("Bir Sayi Giriniz : ");
	scanf("%d", &sayi);
	toplam+=sayi;
	if(toplam < 50){
		goto durak;
	}
	printf("Girilen Sayilarýn Toplami : %d ", toplam);
	

	
	
	return 0;
}

