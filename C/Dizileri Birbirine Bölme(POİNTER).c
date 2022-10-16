#include <stdio.h> 

void bolme(int dizi1[], int dizi2[], double *bolum, int *kalan);


void bolme(int dizi1[], int dizi2[], double *bolum, int *kalan){
    
    int sonuc;

    for(int i=0; i<6; i++){
        bolum[i] = dizi1[i] / (float)dizi2[i];
        sonuc = dizi1[i] / dizi2[i];
        kalan[i] = dizi1[i] - dizi2[i]*sonuc;
    }
}

int main(){
	int dizi1[6] = { 3,6,9,12,16,18 };
    int dizi2[6] = { 2,3,3,4,4,4 };
    int kalan[6];
    double bolum[6];
    

    bolme(dizi1,dizi2,bolum,kalan);

    printf("Bolum:{ ");
    for(int i=0; i<6; i++){
        printf("%.1f,", bolum[i]);
    }
    printf(" }");

    printf("\nKalan:{ ");
    for(int i=0; i<6; i++){
        printf("%d, ", kalan[i]);
    }
	printf("}");
    return 0;
}


