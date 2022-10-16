#include <stdio.h>


int main() {
 
    int sayi1, sayi2, toplama, cikarma, bolme, carpma, mod, faktoriyel, islem;
    int sayi,i,sonuc=1;
    
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
    	
        toplama = sayi1 + sayi2;
        printf("%d+%d = %d", sayi1, sayi2, toplama);
    }
    else if (islem == 2) {
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        cikarma = sayi1 - sayi2;
        printf("%d-%d = %d", sayi1, sayi2, cikarma);
    }
    else if (islem == 3) {
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        carpma = sayi1 * sayi2;
        printf("%d*%d = %d", sayi1, sayi2, carpma);
    }
    else if (islem == 4) { 
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        bolme = sayi1 / sayi2;
        printf("%d/%d = %d", sayi1, sayi2, bolme);
    }
    else if (islem == 5) {
    	printf("Birinci Sayiyiyi Giriniz: ");
   		scanf("%d", &sayi1);
 
    	printf("Ikinci Sayiyi Giriniz: ");
    	scanf("%d", &sayi2);
 
        mod = sayi1 % sayi2;
        printf("%d(%d)=%d",sayi1, sayi2, mod);
    }
    else if (islem == 6) {
    	printf("Faktoriyelini Almak Istediginiz Sayiyi, Giriniz: ");
   		scanf("%d", &sayi);
   		
   		for (i=1;i<=sayi;i++)
   		{
   			sonuc *= i;
		   }
   		
    	printf ("%d sayisinin faktoriyeli %d'dir",sayi,sonuc);
	}
    else {
 
        printf("Islem yapmak icin 1-6 aralýgýnda secim yapmanýz gerekir !");
    }
 
    return 0; 
 
}
