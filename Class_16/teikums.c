// https://github.com/Valers0412/Valers0412/blob/main/Class_16/teikums.c
#include <stdio.h>
#include <string.h>
#define N 254
//idejas algoritmēšanai

/*

1)
int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15

2) vārda garuma aprēķināšanai strlen()
*/

//mainīgie
char burts;
char burti[26] = {0};
char adrese;
char t[N];
char alfabets = 97;

//ja ascii kods  ir no lielajiem burtiem -65
//ja ascii kods ir no mazajiem -97
void teikums_print(char t[]);
int main(){
   printf("Lūdzu ievadiet teikumu!: \n");
   fgets(t, sizeof(t)/sizeof(char), stdin);
   printf("masīva adrese atmiņā (izdruka no main): %p\n",t);
   teikums_print(t);

   for(int i = 0; i<strlen(t); i++)
   {
       //if((t[i]>='A')&&(t[i]<='Z'))
       if((t[i]>=65)&&(t[i]<='Z'))
       {
	  adrese = t[i] - 65;
	  burti[adrese] = burti[adrese]+1;
       }

       if((t[i]>='a')&&(t[i]<='z'))
       {
	  adrese = t[i] - 97;
	  burti[adrese] = burti[adrese]+1;
       }
//    burts = t[i];
//    printf("%c\n", burts);
   }
   for(int j = 0; j<26; j++)
   {
      //printf("\nburta %c skaits teikumā: %d \n",alfabets,burti[j]);
      printf("%3c",alfabets);
      alfabets = alfabets+1;
   }
   printf("\n");
   for(int j = 0; j<26; j++)
   {
      printf("%3d",burti[j]);
   }
   printf("\n");


  // scanf("%s", t);
  // printf("%s", t);
   return 0;
}

void teikums_print(char t[])
{
   printf("masīva adrese atmiņā (izdruka no teikums_print): %p\n",t);
   printf("teikums: ");
   puts(t);
}
