#include <stdio.h>

int main()
{
	
	
			/*				Break ve Continue Deyimlerinin kullanýmý				*/
	
	/*
		- Continue	=> Döngünün o anki adýmýný atlar sonraki adýma geçer ve döngü sartý saðlandýðý sürece çalýþmaya devam eder.
		- Break		=> Break ifadesinden sonra döngünün diðer adýmlarý çalýþmaz. Döngüden çýkar.
	*/
	
	/*
		continue		0123456789		01234 6789
		break			0123456789		01234
		
	*/
	
			/*		Continue Örnek Gösterimi		*/

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
