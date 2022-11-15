#include <stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("./numbers.dat","w+");

 if( fp == NULL )
  {
  printf("Failu nav izdevies atvērt.\n");
  return 100;
  }

 double d[] = {1.89636475468454564, 8.8955548744745, -6.74541558646564};
 printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (before fscanf)\n",d[0],d[1],d[2]);

 fprintf(fp,"%f\n%f\n%f\n",d[0],d[1],d[2]);
 rewind(fp);
 fscanf(fp,"%lf%lf%lf",&d[0],&d[1],&d[2]);
 fclose(fp);

 printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (after fscanf)\n",d[0],d[1],d[2]);

 return 0;
 }
