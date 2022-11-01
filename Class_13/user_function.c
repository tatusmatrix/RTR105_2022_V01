#include<stdio.h>

char dialogs(); // funkcijas deklarēšana
char dialogs_i(int i_dialogs_arg);
//char dialogs_i(int i_dialogs_arg); // argumenti var būt daudzi
//piemēram
void test1(int a, int b, int c); // atslēgas vārds void nozīmē, ka return nebūs
void test2(int a, double b); // datu tips jāpien katram argumentam

int main()
 {
 //char c;
 char c_main_local;
 c_main_local = 10;

/*
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c);
 printf("Ir ievadīts skaitlis: %d\n",c);
*/
 /*{ ..... }*/
/*
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c);
 printf("Ir ievadīts skaitlis: %d\n",c);
*/

 c_main_local = dialogs();
 printf("Ir ievadīts skaitlis (izdruka no main funkc.): %d\n",c_main_local);

 dialogs();

 int i_main = 1;
 dialogs_i(i_main);
 i_main++;
 dialogs_i(i_main);

 return 0;
 }

// funkcijas definēšana (var būt uzreiz definēšana bez deklarēšanas;
//                       definēšana var būt ievietota pēc main apraksta;
//                       deklarēšanai vai definēšanai ir jābūt pirms funkcijas imantošanas)
// funkcijas datu tipam ir jāsaskan ar atgriežama (pie return) lieluma datu tipu
char dialogs()
 {
 char c_dialogs_local;
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ir ievadīts skaitlis (izdruka no dialogs funkc.): %d\n",c_dialogs_local);
 return c_dialogs_local;
 }

char dialogs_i(int i_dialogs_arg)
 {
 char c_dialogs_local;
 printf("\nFunkcija dialogs_i tiek izpildīta %d. reizi:\n",i_dialogs_arg);
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ir ievadīts skaitlis (izdruka no dialogs funkc.): %d\n",c_dialogs_local);
 return c_dialogs_local;
 }

