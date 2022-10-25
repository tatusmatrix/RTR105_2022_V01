// cikla operatori:
// while - "kamēr"
// do while - "darīt kamēr"
// for - "līdz"

// do ; while(izteiksme);
// do
//  ;
// while(izteiksme);
// do {;;;} while(izteiksme);
// do
//  {
//  ;
//  ;
//  }
// while(izteiksme);
// pirms while esošā darbība (vai darbības) tiks izpildītas
// tikmēr, kamēr iekavās () izteiksmes rezultāts ir "true"
// NB! bet šī darbība (vai darbības) obligāti tiks izpildīta vismaz
//     vienu reizi
// "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
// "false" vai "absolūtā nulle" - visi biti ar 0 stāvokli


#include<stdio.h>

int main()
 {
 int a=10;
 do
  {
  printf("a: %d\n",a);
  a--;
  }
 while(a>=0);

 printf("a (pēc cikla): %d\n",a);

 return 0;
 }
