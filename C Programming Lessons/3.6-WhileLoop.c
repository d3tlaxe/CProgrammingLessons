#include <stdio.h>

int main(){
	
		/*	Kullan�c�dan bir tamsay� alal�m ve fakt�riyelini bulal�m	*/
	
	//	5! = 5*4*3*2*1
	
	int sayi, sonuc = 1;	// varsayilan degeri 0
	
	printf("Lutfen bir sayi giriniz :");
	scanf("%d", &sayi);
	
	while(sayi > 0){
		sonuc *= sayi;
		sayi--;
	}
	printf("\n Faktoriyel : %d", sonuc);
	
	return 0;
}

