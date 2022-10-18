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


// &&
 c1 = 1;
 c2 = 2;
 printf("\n%d (%ld bytes) && %d (%ld bytes)",c1,sizeof(c1),c2,sizeof(c2));
 printf(" = %d (%ld bytes)\n\n",c1&&c2,sizeof(c1&&c2));

 printf("\n%d (%ld bytes) && %d (%ld bytes)",c2,sizeof(c2),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n\n",c2&&c1,sizeof(c2&&c1));




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

// >> (pa labi) << (pa kreisi)
// unsigned char uc1 = 1; // 0000 0001 (3 dec 0000 0011 << 3 -> 0001 1000 -> 24 dec)
 char uc1 = 1; // 0000 0001 (3 dec 0000 0011 << 3 -> 0001 1000 -> 24 dec)
 c1 = 0;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0001 (1 dec)
 c1 = 1;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0010 (2 dec)
                                                          // 0 no 7. pozīcijas ārā
                                                          // 0 0. pozīcijā iekšā
 c1 = 2;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0100 (4 dec)
 c1 = 3;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 4;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 5;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 6;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 7;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 //printf(" = %d (%ld bytes)\n",(char)uc1<<c1,sizeof((char)uc1<<c1)); // 0000 1000 (8 dec)
 printf(" = %d (%ld bytes)\n",(char)(uc1<<c1),sizeof((char)(uc1<<c1))); // 0000 1000 (8 dec)
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",(unsigned char)(uc1<<c1),sizeof((unsigned char)(uc1<<c1))); // 0000 1000 (8 dec)
 c1 = 31;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)

 uc1 = 120; // 0111 1000
 c1 = 1;
 printf("\n%d (%ld bytes) >> %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1>>c1,sizeof(uc1>>c1)); // 0011 1100 (60 dec)
 c1 = 2;
 printf("%d (%ld bytes) >> %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1>>c1,sizeof(uc1>>c1)); // 0001 1110 (30 dec)
 c1 = 3;
 printf("%d (%ld bytes) >> %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1>>c1,sizeof(uc1>>c1)); // 0000 1111 (15 dec)

 /*
 78 dec -> 0100 1110 bin
 7. bita saturs - 0 (kā tikt pie 7. bita satura) (0)100 1110 lai ir 0 - 0000 000(0)
                                                (unsigned char)(c1<<0) >> 7
 6. bita saturs - 1 (kā tikt pie 6. bita satura) 0(1)00 1110 lai ir 1 - 0000 000(1)
                                                (unsigned char)(c1<<1) >> 7
 5. bita saturs - 0 (kā tikt pie 5. bita satura) 01(0)0 1110 lai ir 0 - 0000 000(0)
                                                (unsigned char)(c1<<2) >> 7
 4. bita saturs - 0 (kā tikt pie 4. bita satura)
 3. bita saturs - 1 (kā tikt pie 3. bita satura)
 2. bita saturs - 1 (kā tikt pie 2. bita satura)
 1. bita saturs - 1 (kā tikt pie 1. bita satura)
 0. bita saturs - 0 (kā tikt pie 0. bita satura)

 "fokusēšanos" var realizēt ar ... &
 (0)100 1110
&(1)000 0000 (128 dec = 2^7)
 (0)000 0000 >> 7

 0(1)00 1110
&0(1)00 0000 (64 dec = 2^6)
 0(1)00 0000 >> 6

 01(0)0 1110
&00(1)0 0000 (32 dec = 2^5)
 00(0)0 0000 >> 5
 */
 return 0;
 }

