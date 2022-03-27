#include <stdio.h>

struct Oyuncu{
	int konum[2];
	int id;
	char oyuncuAd[20];
	int puan;
};

int main(){
	
	struct Oyuncu o1;
	o1.id = 1;
	o1.konum[0] = 15;
	o1.konum[1] = 25;
	o1.puan = 875;
	strcpy(o1.oyuncuAd,"player1");
	
	struct Oyuncu o2;
	o2.id = 2;
	o2.konum[0] = 17;
	o2.konum[1] = 25;
	o2.puan = 562;
	strcpy(o2.oyuncuAd,"player2");
	
	
	
/*	
	FILE *ptr;
	
	ptr = fopen("oyuncular.bin", "wb");

	fwrite(&o1, sizeof(o1), 1, ptr);

	fclose(ptr);
*/	


	
	struct Oyuncu o3;
	
	FILE *ptr;
	
	ptr = fopen("oyuncular.bin", "rb");

	fread(&o3, sizeof(o3), 1, ptr);

	fclose(ptr);
	
	printf("gelen oyuncunun id : %d", o3.id);
	printf("gelen oyuncunun Puan : %d", o3.puan);
	
	
	
	
	return 0;
}
