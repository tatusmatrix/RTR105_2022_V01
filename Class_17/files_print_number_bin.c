#include <stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("./numbers.bin","wb+");

 if( fp == NULL )
  {
  printf("Failu nav izdevies atvērt.\n");
  return 100;
  }

 double d[] = {1.89636475468454564, 8.8955548744745, -6.74541558646564};
 printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (before fscanf)\n",d[0],d[1],d[2]);

 fwrite(d,sizeof(double),sizeof(d)/sizeof(double),fp);
 rewind(fp);
 fread(d,sizeof(double),sizeof(d)/sizeof(double),fp);
 fclose(fp);

 printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (after fscanf)\n",d[0],d[1],d[2]);

 return 0;
 }
