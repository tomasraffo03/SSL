#include <stdio.h>
int main() {
   
   FILE *f;

   f = fopen("output.txt", "w");
   if(f == NULL) {

   }

   fprintf(f, "Hello World");

   fclose(f);

   return 0;
}