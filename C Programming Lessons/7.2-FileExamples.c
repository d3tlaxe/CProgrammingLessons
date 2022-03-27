#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//FILE *fileptr;
/*
	fileptr = fopen("benimDosyam.txt", "w");
	int yas = 6;
	fprintf(fileptr, "%d", yas);
	fclose(fileptr);
	
*/


/*
	int gelenDeger;

	fileptr = fopen("benimDosyam.txt", "r");
	fscanf(fileptr, "%d", &gelenDeger);
	fclose(fileptr);

	printf("Gelen : %d", gelenDeger);

*/



	

	FILE *ptr;
	
/*
	ptr = fopen("benimDosyamB.bin", "wb");
	int yas2 = 61;
	fwrite(&yas2, sizeof(yas2), 1, ptr);
	fclose(ptr);
		
*/

/*
	int gelenDeger2;
	ptr = fopen("benimDosyamB.bin", "r");
	fread(&gelenDeger2, sizeof(gelenDeger2), 1, ptr);
	fclose(ptr);
	printf("Gelen Geder 2 : %d", gelenDeger2);
*/

	
	return 0;
}
