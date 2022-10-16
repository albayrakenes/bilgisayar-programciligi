#include <stdio.h>

int asalbul(int n);

int asalbul(int n)
{
    int j, kosul = 1;
    int toplam=0;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            kosul =0;
            break;
            toplam+=n;
        }
    }
    return kosul;
}

int main()
{
    int s1, s2, i, kosul;
    int toplam=0;

    printf("Ýki pozitif tam sayý girin: ");
    scanf("%d %d", &s1, &s2);
    printf("%d ve %d arasýndaki asal sayýlarýn toplam : ", s1, s2);

    for(i=s1+1; i<s2; ++i)
    {
        kosul = asalbul(i);
        if(kosul == 1)
            toplam+=i;
    }
    printf("%d ",toplam);
    return 0;
}

