#include <stdio.h>

int main()
{
    
    /*              Format Belirleyiciler / Formatted Output              */
	
	// Format Belirleyiciler
	    
	    char karakter = 'a';
	    printf("Karakter : %c\n", karakter);
	    printf("Karakterin sayilsal degeri : %d\n", karakter);
	    printf("Karakterin sayilsal degeri : %x", karakter);
	
		float sayi = 3.654;
		
		printf("\nSayi : %f", sayi);
		printf("\nSayi : %.2f", sayi);
		printf("\nSayi : %.4f", sayi);
		
		
		
    return 0;
}
