#include<stdio.h>

struct bilgi{
	char ad[500];
	char soyad[500];
	int yas;
	float maas;
};

int main(){
	struct bilgi kisi[5];
	int i;
	for( i=0;i<5;i++){
	
		printf("\nKayitlara Yazilacak Kisinin Bilgilerini Giriniz : \n",i+1);
		printf("-----------------------------------------------\n");
		
		printf(" Kisinin Adini Giriniz : ");
		scanf("%s",kisi[i].ad);
		
		printf(" Kisinin Soyadini Giriniz : ");
		scanf("%s",kisi[i].soyad);
		
		printf(" Kisinin Yasini Giriniz : ");
		scanf("%d",&(kisi[i].yas));
		
		printf(" Kisinin Maasini Giriniz : ");
		scanf("%f",&(kisi[i].maas));
		printf("-----------------------------------------------\n");
	}
		printf("Kisiler Kayitlara Eklendi!\n");
		
		dosyaya_yazdir(kisi);
			
		
	return 0;
}

		void dosyaya_yazdir(struct bilgi*calisan){
			
			FILE *hedef_dosya;
			hedef_dosya  = fopen("kisibilgileri.txt","w+");
			int s;
				fprintf(hedef_dosya, "KAYITLI TUM KISILERIN BILGILERI\n",s+1);
				fprintf(hedef_dosya, "-------------------------------\n");
			for(s =0; s<5; s++){
				fprintf(hedef_dosya, "Isim: %s\n",calisan->ad);
				fprintf(hedef_dosya, "Soyisim: %s\n",calisan->soyad);
				fprintf(hedef_dosya, "Yas: %d\n",calisan->yas);
				fprintf(hedef_dosya, "Maas: %.2f\n",calisan->maas);
				fprintf(hedef_dosya, "-------------------------------\n");
				
				calisan++;
				
			}
			
			fclose(hedef_dosya);
		}
