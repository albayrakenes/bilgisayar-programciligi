#include<stdio.h>
int main()
{
   char string[100];
   int c = 0, harf[26] = {0};
   printf("Kelime Giriniz:\n");
   gets(string);
   while (string[c] != '\0')
   {
      
      if (string[c] >= 'a' && string[c] <= 'z')
         harf[string[c]-'a']++;
      c++;
   }
   for (c = 0; c < 26; c++)
   {
      
      if (harf[c] != 0)
         printf("%c harfinden %d adet var.\n",c+'a',harf[c]);
   }
   return 0;
}
