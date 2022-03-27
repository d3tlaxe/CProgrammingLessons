#include <stdio.h>

int main()
{
   
        /*
            Degisken isimlendirme kurallari
            -   Harf, Rakam ya da (_) olabilir
            -   Rakamla baslayamaz
            -   Amaca uygun isimlendirilmeli
        */
   
   //VeriTipi degisken_ismi
        char karakter;        	// Tek bir karakter tutar.  8 Bit - 1 Byte
        int  tamSayi;           // Tam sayilari tutar.  
        float ondalikliSayi;    // Ondalikli sayilari tutar.  
                                /*
                                    int ve float gibi veri tiplerinin boyutlarý makine mimarisine göre degisebilir.
                                    Benim makinemde 32 Bit yani 4 Byte yer kapliyor. 
                                    Sizdeki boyutunu bilmek isterseniz "sizeof()" komutunu kullanabilirsiniz.
                                */
		
		// printf("Girilen Sayi : %d", sizeof(int));
			                    
        printf("char Veri Boyutu : %d byte\n", sizeof(char));
        printf("int Veri Boyutu : %d byte\n", sizeof(int));
        printf("float Veri Boyutu : %d byte\n", sizeof(float));


    /* Diger Veri Tipleri  */
        short kucukInt;
        long buyukInt;
        double hassasFloat;  
    
        printf("short Veri Boyutu : %d byte\n", sizeof(short));
        printf("long Veri Boyutu : %d byte\n", sizeof(long));
        printf("double Veri Boyutu : %d byte\n", sizeof(double));
    
	   /*  void, bool, enum kavramlari 
        void    // hiclik, yokluk
        bool    // true/false dogru/yanlis durumlarini tanýmlayan degisken tipi 
        enum    // Numaralandirma sabiti
    
    /*      Constant / Sabitler  */  

        const float PISabit = 3.14;
        float piDegisken = 3.14;
        
        
        //PISabit = 4.5;
        piDegisken = 4.5;
        
        printf("PI : %f\n", PISabit);
        printf("PI : %f", piDegisken);
        
        
        
        
    	//	Ekstra Bilgi 	-	Degisken tanýmlarken kullanýlabilecek yazým tarzlarý
    /*
    	camelCase	int tamSayi
    	PascalCase	int TamSayi
    	snake_case	int tam_sayi
    	kebab-case	int tam-sayi
    */
    return 0;
}
