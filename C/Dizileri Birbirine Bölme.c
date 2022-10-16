#include <stdio.h> 

void bol(int a[], int b[]);

double bolum[6];
int kalan[6];

int main(){

    int a[6] = { 3,6,9,12,16,18 };
    int b[6] = { 2,3,3,4,4,4 };

    bol(a,b);

    printf("Bolum: ");
    for(int i=0; i<6; i++){
        printf("%.1f, ", bolum[i]);
    }

    printf("\nKalan:  ");
    for(int i=0; i<6; i++){
        printf("%d, ", kalan[i]);
    }

    return 0;
}

void bol(int a[], int b[]){

    int sonuc;

    for(int i=0; i<6; i++){
        bolum[i] = a[i] / (float)b[i];
        sonuc = a[i] / b[i];
        kalan[i] = a[i] - b[i]*sonuc;
    }
}
