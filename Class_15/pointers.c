#include<stdio.h>

int main()
 {
 int i_value = 8963;
 printf("i_value (found by identificator) = %d\n",i_value);
 printf("sizeof(i_value) = %ld (bytes)\n",sizeof(i_value));

 int *i_pointer = &i_value;
 printf("\ni_pointer (address) = %p\n",i_pointer);
 printf("i_value (found by address) = %d\n",*i_pointer);
 printf("sizeof(i_ponter) = %ld (bytes)\n",sizeof(i_pointer));

 //*i_pointer = (*i_pointer)++; // inkrements šeit nestrādā, jo, pirmkārt,
                                // tam zemākā prioritāte, otrkrārt, izgūta vērtība
                                // iekš () vairs nav saistīta ne ar kādu mainīgo,
                                // kuram šī inkrementa operācija tiktu veikta
 *i_pointer = (*i_pointer)+1;
 printf("\ni_value (found by identificator; after increment) = %d\n",i_value);


 double d_value = 1.3e-3;
 printf("\n\nd_value (found by identificator) = %f\n",d_value);
 printf("sizeof(d_value) = %ld (bytes)\n",sizeof(d_value));

 double *d_pointer = &d_value;
 printf("\nd_pointer (address) = %p\n",d_pointer);
 printf("d_value (found by address) = %f\n",*d_pointer);
 printf("sizeof(d_ponter) = %ld (bytes)\n",sizeof(d_pointer));

 *d_pointer = (*d_pointer)+0.25;
 printf("\nd_value (found by identificator; after change) = %f\n",d_value);

 return 0;
 }

// 0c -> 0d -> 0e -> 0f - 4 bytes for i_value
// 10 -> 11 12 13 14 15 16 17 - 8 bytes for d_value
// 18 - for next
