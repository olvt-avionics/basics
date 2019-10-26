#include <stdio.h>
int main(int argc, char **argv)
{
  FILE *f = fopen(argv[1], "r");// "r" for read
  FILE *r = fopen("OutPut.txt", "w");
  char outArray[100];
  while(fscanf(f, "%s", outArray)==1){
 	 fprintf(r,"%s " ,outArray);
}

  fclose(f);
  fclose(r);
  return 0;
}
