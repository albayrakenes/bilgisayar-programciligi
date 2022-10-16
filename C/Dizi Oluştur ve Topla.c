#include<stdio.h>

float topla(float sayilar[]){
	int i;
	float toplam=0;
	for (i=0; i< 5; i++){
		toplam=toplam+sayilar[i];
		
	}
	return toplam;
}

int main(){
	float sayilar[5];
	int i;
	for (i = 0 ; i < 5 ; i++){
		
		printf("Diziye Eklenecek Bir Sayi Giriniz : ");
		scanf("%f",&sayilar[i]);
	}	
	
	printf("Dizideki Elemanlar =");
	for (i=0; i< 5; i++){
		
		printf(" %.2f",sayilar[i]);
		
	}
	
	printf("\nDizinin Elemanlarinin Toplami = %.2f\n",topla(sayilar));
	
	return 0;
}
