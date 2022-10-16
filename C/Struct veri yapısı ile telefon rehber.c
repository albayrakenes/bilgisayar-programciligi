#include<stdio.h>

struct rehber{
	char isim[500];
	char soyad[500];
	char numara[500];
};

void Ekranabas(struct rehber kisi){
   	printf("\nRehbere Eklenen Kisi : \n");
    printf("\nADI: %s", kisi.isim);
    printf("\nSOYADI: %s", kisi.soyad);
    printf("\nNUMARASI: %s\n", kisi.numara);
}

int main(){
	int i;
	for( i=0;i<5;i++){
		struct rehber kisi;
		printf(" Telefon Rehberine Eklenecek Kisinin Adini Giriniz : ");
		scanf("%s",&kisi.isim) ;
		
		printf(" Kisinin Soyadini Giriniz : ");
		scanf("%s",&kisi.soyad) ;
		
		printf(" Kisinin Numarasini Giriniz : ");
		scanf("%s",&kisi.numara) ;
		
		Ekranabas(kisi);
	}
	return 0;
}
