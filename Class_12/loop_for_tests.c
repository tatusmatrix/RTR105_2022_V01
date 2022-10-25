// cikla operatori:
// while - "kamēr"
// do while - "darīt kamēr"
// for - "līdz"

// NB! for( ; ; ) - for cikla () vienmēr satur divus semikolus - ;

// for( ; izteiksme ; );
// for( ; izteiksme ; )
//  ;
// for( ; izteiksme ; ){;;;}
// for( ; izteiksme ; )
//  {
//  ;
//  ;
//  }
// aiz for (;;) iekavām esošā darbība (vai darbības) tiks izpildītas
// tikmēr, kamēr iekavās (;izteiksme;) izteiksmes rezultāts ir "true"
// "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
// "false" vai "absolūtā nulle" - visi biti ar 0 stāvokli

#include<stdio.h>

int main()
 {
 int a;
 for(a=10 ; a>=0 ; a--)
 // darbība(s) pirms pirmā ; tiek izpildītas vienu reizi cikla sākumā
 // tālāk izteiksmes rezultāta aprēķins (jēb nosacījuma pārbaude)
 // cikla ķermeņa (iekš {}) darbību pildīšana
 // cikla mainīgo izimaiņa atbilstoši aprakstam aiz otrā ;
 // turpinājumā cikla izteiksmes (nosacījuma) rezultāta aprēķins
  {
  printf("a: %d\n",a);
  }
 printf("a (pēc cikla): %d\n",a);

 return 0;
 }
