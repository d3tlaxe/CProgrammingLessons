#include <stdio.h>

int main()
{
	
	
			/*				Break ve Continue Deyimlerinin kullan�m�				*/
	
	/*
		- Continue	=> D�ng�n�n o anki ad�m�n� atlar sonraki ad�ma ge�er ve d�ng� sart� sa�land��� s�rece �al��maya devam eder.
		- Break		=> Break ifadesinden sonra d�ng�n�n di�er ad�mlar� �al��maz. D�ng�den ��kar.
	*/
	
	/*
		continue		0123456789		01234 6789
		break			0123456789		01234
		
	*/
	
			/*		Continue �rnek G�sterimi		*/

/*
	int i;
	for(i = 0; i < 10 ; i++){
		
		if(i == 4){
			continue;
		}
		
		if(i == 7){
			break;
		}
		printf("%d. Adim \n",i);	
	}
*/






	
	
	int sayi = 0;
	while(sayi >= 0){
		printf("Pozitif bir sayi giriniz : ");
		scanf("%d", &sayi);
		if(sayi < 0){
			printf("Sana Pozitif Bir Sayi Gir Demistim !!! ");
			break;
		}	
	}	
	
	
    return 0;
}
