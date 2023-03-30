#include <stdio.h>
int main() {
   
   FILE *f;

   f = fopen("output.txt", "w");
   if(f == NULL) {
      printf("error");   
      exit(1);
   }

   fprintf(f, "Hello World");

   fclose(f);

   return 0;
}
