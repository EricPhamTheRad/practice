#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  FILE* inFile = NULL;
  
  char input[100];
  char filename[100];

  fgets(input, 101, stdin);

  fscanf(stdin, "%s", filename);

  inFile = fopen(strcat(filename, ".txt"), "w");
   if (inFile == NULL) {
      printf("Could not open file myfile.txt.\n");
   }

  fputs(input, inFile);  

  
  return 0;
}