// https://cplusplus.com/reference/cstdio/gets/
// https://cplusplus.com/reference/cstdio/fgets/
#include <stdio.h>
#define N 100

int main()
{

  char string [N];
  printf ("Insert your full address: ");
  gets (string);     // warning: unsafe (see fgets instead)
  printf ("Your address is (gets used): %s\n\n",string);

  char mystring [N];
  printf ("Insert your full address one more time: ");
  if ( fgets (mystring , 100 , stdin) != NULL )
   {
   printf ("Your address is (fgets used): ");
   puts (mystring);
   }

  for(int i=0;i<N;i++)
   {
   printf("%02d. symbol %c (ASCII code - %d)\n",i+1,mystring[i],mystring[i]);
   }

  return 0;
}
