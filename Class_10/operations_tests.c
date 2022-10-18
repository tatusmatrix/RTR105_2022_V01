// operācijas:       operands_1 operācija operands_2     |operācija operands|
//                   (datu tips)          (datu tips)
//                                   ||
//                                   \/
//                          operācijas_rezultāts
//                               (datu tips)
// parasti operācijas rezultāta datu tips ir "lielākais" datu tips, kas tiek izmantots operācijā
// matemātiskās: +, -, *, /, %, ++, --
//               int i1 = 5, i2 = 6, ir;
//               ir = i1 + i2;
//               ir = ir + 10;
//               ir += 10; // tas ir tas pats ir = ir + 10; tikai kompakti pierakstīts
//               ir++; // ir = ir + 1; vai ir += 1;
// attiecību: <, <=, >=, >, ==, !=
// loģiskās: &&, ||, ! (1 operands)
// loģiskās pa bitiem: &, |, ^, ~ (1 operands)
// bitu: >>, <<
//
// Ko pētīt šodien: kā strādā operācija?
//                  vai operācijā drīkst izmantot jebkuru datu tipu?
//                  operāciju izpildīšanas secība? (to nosaka prioritāte;
//                                                  secības kontrolei izmanto ())
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>
// 


#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

 printf("\n%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));

// % - nedrīkst lietot reāliem skaitļiem (C valodā ...)
// printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)",f1,sizeof(f1),'%',f2,sizeof(f2));
// printf("\n%.1f (%ld bytes) %% %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
// printf(" = %.1f (%ld bytes)\n\n",f1%f2,sizeof(f1%f2));
// 78 % 65 -> 13
// 999 % 1000 -> 999

// >
 printf("\n%.1f (%ld bytes) > %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
 //printf(" = %.1f (%ld bytes)\n\n",f1>f2,sizeof(f1>f2));
 printf(" = %d (%ld bytes)\n\n",f1>f2,sizeof(f1>f2));

// !
 printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes)\n",c1,sizeof(c1),c1,!c1,sizeof(!c1));
 c1 = 0;
 printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes)\n",c1,sizeof(c1),c1,!c1,sizeof(!c1));
 //printf("\n%.1f (%ld bytes) -> !%.1f=%.1f (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));
 printf("\n%.1f (%ld bytes) -> !%.1f=%d (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));
 f1 = 0.0000001;
 printf("\n%e (%ld bytes) -> !%e=%d (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));
 f1 = 3.8e-40;
 printf("\n%e (%ld bytes) -> !%e=%d (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));

 return 0;
 }

