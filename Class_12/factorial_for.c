// 5! = 1 * 2 * 3 * 4 * 5 = (5-0) * (5-1) * (5-2) * (5-3) * (5-4) = 
//    = 4! * 5
// 5! / 5 = 4!

// 0! = 1 (faktoriāla darbība ir saistīta ar skaitļu kopām
//         jautājums 0! - cik skaitļu kopas var uztasīt no tukšas - 0
//         - kopas - [] - viena)

#include<stdio.h>

int main()
 {
 int i,n,fact;
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu veselu skaitli: ");
 scanf("%d",&n);

 //i = 0;
 fact = 1;
 //for(i=1,fact=1;;)
 for(i=1 ; i<=n ; i++)
  {
  fact = fact * i;
  printf("%3d! = %15d\n",i,fact);
  }

 return 0;
 }
