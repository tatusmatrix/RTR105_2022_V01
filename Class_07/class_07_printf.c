// https://cplusplus.com/reference/cstdio/printf/
/* printf example */
#include <stdio.h>

int main()
{
 printf ("Characters (as symbols): %c %c ", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
 printf ("Characters (as dec): %d %d \n", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
// printf ("Characters (as oct): %o %o \n", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
// printf ("Characters (as hex): %x %x \n", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
// printf ("Characters: 0%o 0%o \n", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
// printf ("Characters: 0x%x 0x%x \n", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
 printf ("Characters: %#o %#o \n", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
 printf ("Characters: %#x %#x \n", 0141, 65);// 'a' VS 97 VS 0x61 VS 0141 -> 0110 0001
 printf ("Decimals: %d %ld\n", 1977, 650000L);
 printf ("Preceding with blanks: %10d %d\n", 197455545,45525445);
 printf ("Preceding with blanks: %10d %d\n", 1977455545,454554);
 printf ("Preceding with blanks: %10d %d\n", 1975545,454554);
 printf ("Preceding with blanks: %10d %d\n", 1975545,45);
 printf ("Preceding with blanks: %10d %d\n", 1975545,45);
 printf ("Preceding with blanks: %10d %d\n", 1977455545,5);
 printf ("Preceding with blanks: %10d %d\n", 19745,454544);
 printf ("Preceding with blanks: %10d %d\n", 1975545,45444455);
 printf ("Preceding with zeros: %010d \n", 1977);
 printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
 printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
 printf ("Width trick: %*d \n", 5, 10);
 printf ("%s \n", "A string");
 return 0;
}
