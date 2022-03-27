#include <stdio.h>

int main(){
	
		/*	Kullanýcýdan bir tamsayý alalým ve faktöriyelini bulalým	*/
	
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

