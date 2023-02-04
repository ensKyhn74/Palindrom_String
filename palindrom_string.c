#include <stdio.h>
#include <string.h>
// klavyeden girilen string'in palindrom(sondan okunuşu baştan okunuşuyla aynı) olup olmadığını kontrol eden program
// kabak , ata , ebe gibi stringler palindrom

int main()

{
  
   
 int i;  
 
 int PalindromSorgu = 1;
   
 char input[20]; 
 
 printf("string girin:");
 gets(input);
 
 int KarakterSayisi = strlen(input);
 
 for(i = 0 ; i < KarakterSayisi/2 ; i++)  // kabak kelimesi 5 karakterden oluşan palindrom stringdir
 {                                  // i < 5/2  --->  i < 2 yani 0. ve 1.indeks kontrol edilmesi yeterlidir! 
     
   if(input[i] != input[KarakterSayisi-i-1]) // KullaniciGirisi[0]!=KullaniciGirisi[5-0-1]  // KullaniciGirisi[0]!=KullaniciGirisi[4] 
   {                                                        // KullaniciGirisi[1]!=KullaniciGirisi[5-1-1] // KullaniciGirisi[1]!=KullaniciGirisi[3]
    PalindromSorgu = 0;   
     
    break;
   }
    
 }
 
  if(PalindromSorgu)  // PalindromSorgu = 1 ise...
  {
   puts("string palindrom");   
  } 

  else
  {
   puts("string palindrom degil!");   
  } 
 
  return 0;
  
}