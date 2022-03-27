#include <stdio.h>

int main(){
	
	// malloc(direkt boyut verilebilir ya da "5*sizeof(int)" gibi bir boyut tarif edilebilir);
	// calloc(elemanSayisi, elemaninBoyutu);
	// realloc();		
	// free();
	
	

	
	
	
	int benimDizim[5]; // asd45234 asd45238 asd45242 asd45246 asd45250
	
	
	
/*	

	//int *ptr = malloc(sizeof(int)*5);
	
	int *ptr = calloc(5, sizeof(int));
	
	
	ptr[2] = 4;
	int i;
	for(i=0; i<5; i++){
		printf("\n%d. Adresi: %p | %d. degeri: %d", (i+1), &ptr[i], (i+1), ptr[i]);
	}
	


	free(ptr);
	for(i=0; i<5; i++){
		printf("\n%d. Adresi: %p | %d. degeri: %d", (i+1), &ptr[i], (i+1), ptr[i]);
	}
*/

	dinamikToplama();
	
	return 0;
}



void dinamikToplama(){
	
	int kacTane;
	printf("\n\nKac sayi toplamak istiyorsunuz : ");
	scanf("%d", &kacTane);
	
	int *ptr = (int*) calloc(kacTane, sizeof(int));

	int i;
	for(i=0; i<kacTane; i++){
		printf("\n%d. Sayiyi Giriniz : ", (i+1));
		scanf("%d", &ptr[i]);
	}
	
	
	int toplam = 0;
	for(i=0; i<kacTane; i++){
		toplam += ptr[i];
	}
	
	printf("Toplam deger : %d", toplam);
}




