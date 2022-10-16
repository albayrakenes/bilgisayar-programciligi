
#include <stdio.h>
#define TRUE 1
int Armstrongmu(int Sayi);
int main()
{
    int i,AltGirdi,UstGirdi;
    printf("\nAlt Limiti Girin: ");
    scanf("%d",&AltGirdi);
    printf("\nUst Limiti Girin: ");
    scanf("%d",&UstGirdi);
    if ((AltGirdi < 0) || (UstGirdi < 0))
        printf("Limitler pozitif sayi olmalidir!");
    else
        for (i=AltGirdi; i<UstGirdi+1; i++){
            if(Armstrongmu(i)==1)
                printf("\n%d",i);
        }
}

int Armstrongmu(Sayi){
    int Temp=Sayi,Hesap,Toplama=0;
    while(Sayi){
        Hesap=Sayi%10;
        Toplama=Toplama+(Hesap*Hesap*Hesap);
        Sayi=Sayi/10;
    }
    if(Temp==Toplama)
        return TRUE;
}


