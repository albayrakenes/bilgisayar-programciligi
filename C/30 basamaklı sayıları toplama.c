#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Kac basamakli sayilari toplamak istiyorsak
//MAX degerini ona gore degistirebiliriz.
#define MAX 30

int main()
{
    //Tanimlar...
 char num1 [MAX], num2 [MAX], a, b, arr1 [MAX], arr2 [MAX];
 int i, j, sum[MAX + 1], counter = 0, total;


 //Dizileri sifirliyoruz.
 for (i = MAX-1; i >=0; --i)
 {
  num1[i] = '0';
  num2[i] = '0';
  arr1[i] = '0';
  arr2[i] = '0';
  sum[i]  = 0;
 }

 printf("1. sayiyi girin: ");
 scanf("%s", num1);

 printf("2. sayiyi girin: ");
 scanf("%s", num2);

 //x ve y degisgenine girilen sayilarin uzunlugunu atiyoruz.
 int x = strlen(num1), y = strlen(num2);

 /* i nin (MAX - 1) olmasini istiyoruz. Yadi arr1 ve arr2
  * dizilerinin son degeri, sayilarin ilk degeri olacak.
  * Bunun sebebi ise biz basit yontemle toplama yapiyoruz.
  * Mesela birler basamaklari 5 ve 8 olsun: 8+5=13 tur. Bu
  * durumda 1 elde sonuca 3 yazarýz. Bu program bu mantýga
  * dayaniyor.*/

 for (i = MAX - 1, j = x - 1; i >= MAX - x; --i, --j)
 {
  arr1 [i] = num1 [j];
 }

 for (i = MAX - 1, j = y - 1; i >= MAX - y; --i, --j)
 {
  arr2 [i] = num2 [j];
 }


 for (i = MAX -1; i >= 0; --i)
 {
  a = arr1[i], b = arr2[i];

  /* (int)(a + b - 2*'0') ifadesi a ve b karakter jodlarini
  toplar ve bundan 0 karakter kodunun iki katini cikarir
  boylece int turunden bir sayi elde etmis oluruz.
  counter elde kalan degeri total e ekler.*/

  total = (int)(a + b - 2*'0') + counter;
  // counter totale eklendikten sonra sifirlanir. Yoksa hata olur.
  counter = 0;
  /* Eger total 10 dan buyukse bu durumda eldeyi arttirmamiz
  ve totalden 10 cikarmamiz gerekiyor. */
  if (total >= 10)
  {
   total -= 10;
   counter = 1;
   sum [i] = total;
  }else{
   sum [i] = total;
  }

 }

 //Toplam sonucunu ekrana yazdiriyor.
 for (i = 0; i < MAX; ++i)
 {
  printf("%d", sum[i]);
 }



    return 0;
}
