#include <stdio.h>

int checkPrimeNumber(int n);
int main()
{
    int n1, n2, i, flag;

    printf("Ýki pozitif tam sayý girin: ");
    scanf("%d %d", &n1, &n2);
    printf("%d ve %d arasýndaki asal sayýlar: ", n1, n2);

    for(i=n1+1; i<n2; ++i)
    {
        // i bir asal sayý, bayrak 1'e eþit olacak
        flag = checkPrimeNumber(i);

        if(flag == 1)
            printf("%d ",i);
    }
    return 0;
}

// asal sayýyý kontrol etmek için kullanýcý tanýmlý fonksiyon
int checkPrimeNumber(int n)
{
    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
