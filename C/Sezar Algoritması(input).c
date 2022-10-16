#include<stdio.h>
 
int main()
{
	char mesaj[100], ch;
	int i, key;
	
	printf("Sifrelencek Kelimeleri Giriniz: ");
	gets(mesaj);
	printf("Kac harf Sonrasi ile sifrelensin: ");
	scanf("%d", &key);
	
	for(i = 0; mesaj[i] != '\0'; ++i){
		ch = mesaj[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			mesaj[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			mesaj[i] = ch;
		}
	}
	
	printf("Sifrelenmis: %s", mesaj);
	
	return 0;
}
