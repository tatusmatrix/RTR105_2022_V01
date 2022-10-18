#include<stdio.h>

int main()
 {
 if(1); // iekš () var būt "apaļā" nulle (visi biti ir ar 0)
        // vai bitu secība kas satur kaut vienu bitu ar 1
 int a = 10;
 if(a > 7) // a > 7 -> 0000 0000  0000 0000  0000 0000  0000 0001
  printf("Viena darbība, kas tiks izpildīta, ja \"nosacījums ir spēkā\".\n");
  // "nosacījums ir spēkā" - rezultātā ir vismaz viens bits ar 1

 printf("Šī darbība tiks izpildīta jebkurā gadījumā.\n");

 if(a > 7)
  {
  printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums ir spēkā\".\n");
  printf("Pirmā darbība.\n");
  printf("Otrā darbība.\n");
  }

 if(a < 7)
  {
  printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums ir spēkā\".\n");
  printf("Pirmā darbība.\n");
  printf("Otrā darbība.\n");
  }
 else // else nesatur nosacījumu
      // else vienmēr "pieder" kādam if -
      // - atrodas vienas darbības ; vai darbību bloka {;;;} attālumā no tā
  {
  printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums nav spēkā\".\n");
  printf("Pirmā darbība.\n");
  printf("Otrā darbība.\n");
  }
 // "nosacījums nav spēkā" - rezultāta visi biti ir ar 0

 //if(nosacījums) ;
 //if(nosacījums) ; else ;
 //if(nosacījums){;;;} else ;
 //if(nosacījums) ; else {;;;}
 //if(nosacījums){;;;} else {;;;}

 // ja ļoti gribās kaut ko elif veidīgo
 /*
 if(nosacījums_a)
  {
  ;
  }
 else
  {
  if(nosacījums_b)
   {
   ;
   }
  }
 */

 return 0;
 }
