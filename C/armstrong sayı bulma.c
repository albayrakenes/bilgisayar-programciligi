#include <stdio.h>

 
int main(){
    
    int sonuc=0, gecici, basamakDegeri,a,b;
    
    	baslangic:
		printf("Minimum Deger Girin ?",a);
 		scanf("%d",&a);
 		if (a<100){
 			printf("99'dan buyuk deger girin\n");
 			goto baslangic;
		 }
	
		baslangic2:
		printf("Maksimum Deger Girin ?",b);
 		scanf("%d",&b);
 		if (b>999){
 			printf("1000'den kucuk deger girin\n");
 			goto baslangic2;

		 }
  		
    
    
    
    
	for(int i=a; i<b; i++){  
        
        gecici = i; 
        
        while(gecici > 0){
            
            basamakDegeri = gecici % 10;
            gecici /= 10;
            sonuc += basamakDegeri * basamakDegeri * basamakDegeri;
        }
        
        if( sonuc == i)
            printf("%d ", sonuc);
            
        sonuc = 0;  
    }
   
    return 0; 
}
