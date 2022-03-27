#include <stdio.h>

int main(){


/*		
	int normalDegisken = 20;  
	int *pointerDegisken = &normalDegisken;
	
	//	normalDegisken			içerisinde int, float vb. veri tutan normal deðiþkenler
	//	&normalDegisken			normalDegiskenin adresi
	//	pointerDegisken			normalDegiskenin adresi						
	//	*pointerDegisken		pointerýn içindeki adreste bulunan deger

	
	printf("Normal Degisken Degeri 				: %d\n", normalDegisken);
	printf("Normal Degisken Adresi 				: %p\n", &normalDegisken);
	printf("Pointer Degisken Degeri 			: %p\n", pointerDegisken);
	printf("Pointerin Icinde Bulunan Adresteki Deger 	: %d\n", *pointerDegisken);

*/	
	
	
	
	// Pointer içerisine karakter dizisi atmak ve bunu bir dizi gibi kullanmak 
	// Dizi ve pointer benzerliði 

	

	/*
	
	int dizim[] = {4,5,6,1,2,3};
	int *ptr;
	
	ptr = dizim;
	
	printf("\nptr icindeki adres : %p\n", ptr);
	printf("Dizinin ilk indisinin bellekteki adresi : %p", &dizim[0]);

	*/
	
	char isim[] = "mehmet";
	
	printf("ilk deger : %s", isim);
	strcpy(isim, "Ahmet");
	printf("\nsonraki deger : %s", isim);
	
	
	//Kendi fonksiyonumuz
	char isim2[] = "mahmut";
	
	printf("\nilk deger : %s", isim2);
	myStrCpy(isim2, "Selim");
	printf("\nsonraki deger : %s", isim2);
	
	
	
	
	
	// Call by Value
	// Call by Reference anlatýlacak 		-- örnek olarak strcpy fonksiyonunu kendimiz yazmayý deneyelim
	
	
	
	
	return 0;
}


void myStrCpy(char *ptr, char *yeni){
	
	int i;
	for(i=0; i<strlen(ptr); i++){
		ptr[i] = yeni[i];
	
	}
}

