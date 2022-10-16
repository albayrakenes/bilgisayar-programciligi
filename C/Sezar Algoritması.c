#include<stdio.h>
 
int main()
{
	char mesaj[100], ch;
	int i;
	printf("Sezar Sifreleme Programina Hosgeldiniz\n");
	printf("Sifrelencek Kelimeleri Giriniz: ");
	gets(mesaj);
	
	for(i = 0; mesaj[i] != '\0'; ++i){
		ch = mesaj[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + 3;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			mesaj[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + 3;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			mesaj[i] = ch;
		}
	}
	
	printf("Sifrelenmis: %s\n", mesaj);
	
	
	system("pause");
	return 0;
}
