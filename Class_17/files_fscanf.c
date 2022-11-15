#include <stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("./teksts.dat","rt");
 char ch;

 if( fp == NULL )
  {
  printf("Failu nav izdevies atvērt.\n");
  return 100;
  }

 while( (ch=fgetc(fp)) != EOF )
  putc(ch, stdout);
  //printf("%c",ch);

 fclose(fp);

 return 0;
 }
