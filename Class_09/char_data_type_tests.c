#include<stdio.h>

int main()
 {
 char a = 10; // divas darbības:
              // mainīgā deklarēšana - char a - vietas piešķiršana atmiņā
              // kur? (vietai ir adrese) un cik daudz? (atbiltoši datu tipam)
              // 1 byte: šī baita saturs nav zināms (0001 1110 vai 1100 1111 utt.)
              // vērtības piešķiršana - a = 10;
              //                            10 - vesela tipa konstante
              //                            int - vesela tipa konstantēm
              //                            double - reālā tipa konstantēm
              // 1 byte: 0000 1010
              // char a = 10; - mainīgā definēšana
              // mainīgā nosaukums (vārds, identifikators) nevar saturēt atstarpes
              //                                           nevar sakties ar skaitli
              // var būt ar mnemonisko nasaukumu, piem. cilindra_tilpums
 printf("a mainīgā vērtība (kā simbols): %c\n",a);
 printf("a mainīgā vērtība (kā decimāls skaitlis): %d\n",a);
 printf("a mainīgā vērtība (kā heksidecimāls skaitlis): %#x\n",a);
 printf("a mainīgā vērtība (kā oktāls skaitlis): %#o\n",a);

 //char a; // NEDRĪKST pārdeklarēt mainīgo!!!
 char b;
 printf("\nb mainīgā vērtība pirms vērtības piešķiršanas (kā simbols): %c\n",b);
 printf("b mainīgā vērtība -\"- (kā decimāls skaitlis): %d\n",b);
 printf("b mainīgā vērtība -\"- (kā heksidecimāls skaitlis): %#x\n",b);
 printf("b mainīgā vērtība -\"- (kā oktāls skaitlis): %#o\n",b);

 b = 250;
 // 250 vietā redzām -6 - kāpēc?                                                   7654 3210
 // 250 (dec) = 128(2^7) + 64(2^6) + 32(2^5) + 16(2^4) + 8(2^3) + 2(2^1) ->  (bin) 1111 1010
 // char -> signed char => vecākais bits zīmei                                   (1)111 1010
 //                                                                            ^ -> 000 0101
 //                                                                           +1 -> 000 0001
 //                                                                                 --------
 //                                                                                 000 0110
 //                                                          0000 0110 (bin) -> 6 (dec)
 //                                                               rezultātā ir -6
 printf("\nb mainīgā vērtība pēc vērtības piešķiršanas (kā simbols): %c\n",b);
 printf("b mainīgā vērtība -\"- (kā decimāls skaitlis): %d\n",b);
 printf("b mainīgā vērtība -\"- (kā heksidecimāls skaitlis): %#x\n",b);
 printf("b mainīgā vērtība -\"- (kā oktāls skaitlis): %#o\n",b);

 unsigned char c = 320;
 printf("\nc mainīgā vērtība pirms vērtības piešķiršanas (kā simbols): %c\n",c);
 printf("c mainīgā vērtība -\"- (kā decimāls skaitlis): %d\n",c);
 printf("c mainīgā vērtība -\"- (kā heksidecimāls skaitlis): %#x\n",c);
 printf("c mainīgā vērtība -\"- (kā oktāls skaitlis): %#o\n",c);

 return 0;
 }
