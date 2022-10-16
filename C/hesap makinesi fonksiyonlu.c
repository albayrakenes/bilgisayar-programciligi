
#include <stdio.h>

int toplama(int sayi1,int sayi2)
{
	return sayi1+sayi2;
}
int carpma(int sayi1,int sayi2)
{
	return sayi1*sayi2;
}
int bolme(int sayi1,int sayi2)
{
	return sayi1/sayi2;
}
int cikarma(int sayi1,int sayi2)
{
	return sayi1-sayi2;
}
int mod(int sayi1,int sayi2)
{
	return  sayi1%sayi2;
}
int faktoriyel(int sayi1){
	if(sayi1==1)
		return 1;
	return sayi1*faktoriyel(sayi1-1);
}	

int main() {
 
    int sayi1, sayi2, islem;
 	
    
    
    printf("Yapilabilir Islemler:\n\n");
	printf("\t-Toplama     [1]\n"); 
    printf("\t-Cikarma     [2]\n"); 
    printf("\t-Carpma      [3]\n");
    printf("\t-Bolme       [4]\n");
    printf("\t-Modulo      [5]\n");
    printf("\t-Faktoriyel  [6]\n\n");
    printf("Yapilacak islemi seciniz: ");
    scanf("%d", &islem);
    
 
    if (islem == 1) {
 		printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
    	
		printf("iki sayinin toplami: %d\n",toplama(sayi1,sayi2));
    }
    else if (islem == 2) {
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        printf("iki sayinin farki: %d\n",cikarma(sayi1,sayi2));
    }
    else if (islem == 3) {
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        printf("iki sayinin carpimi: %d\n",carpma(sayi1,sayi2));
    }
    else if (islem == 4) { 
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        printf("iki sayinin bolumu: %d\n",bolme(sayi1,sayi2));
    }
    else if (islem == 5) {
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        printf("Modulo: %d\n",mod(sayi1,sayi2));
    }
   else if (islem == 6) {
    	printf("Faktoriyelini Almak Istediginiz Sayiyi, Giriniz: ");
   		scanf("%d", &sayi1);
   		
   		printf("Faktoriyel: %d\n",faktoriyel(sayi1));
		   }
   		
    else {
 
        printf("Islem yapmak icin 1-6 aralýgýnda secim yapmanýz gerekir !");
    }
 
    return 0; 
 
}
