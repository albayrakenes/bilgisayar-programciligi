#include <stdio.h>

int main()
{
	int numbers[100];
    char character;
	int index=0;
    int rakam=0; 
	int sayac=0;
	printf("-----------------------------------\n");
	printf("PROGRAMI BITIRMEK ICIN '@' GIRINIZ!\n");
	printf("-----------------------------------\n");
	printf("\nCUMLE VEYA PARAGRAF GIRINIZ = \n");
    while(character != '@')
    {
        scanf("%c", &character);

        if(isdigit(character))
        {
            rakam = character - '0';

            while(1)
            {
                scanf("%c", &character);
                if(isdigit(character))
                {
                    rakam = rakam * 10 + character - '0';
                }
                else
                {
                    break;
                }
            }
            numbers[sayac] = rakam;
            sayac = sayac + 1;
        }
    }
    printf("GIRDIGINIZ CUMLEDEKI TUM RAKAMLAR = ");

    for(index=0; index<sayac; index++)
    {
        printf("%d ",numbers[index]);
    }
}

