#include <stdio.h>
#include <string.h>
#include <ctype.h>

void addnum(int num1, int num2, int* sum){
  *sum = num1 + num2;
}

int main(void) {
  FILE* inFile = NULL;
  int num1;
  int num2;
  int sum;
  char name[4][25];
  char filename[100];

  fscanf(stdin, "%s", filename);

  inFile = fopen(strcat(filename, ".txt"), "w");
   if (inFile == NULL) {
      printf("Could not open file myfile.txt.\n");
      return -1; // -1 indicates error
   }
  /*
  for(int i = 0; i < 4; i++){
    fscanf(inFile, "%s", name[i]);
  }

  //scanf("%d %d", &num1, &num2);
  //addnum(num1, num2, &sum);
  for(int i = 0; i < 4; i++){
    printf("%s ", name[i]);
  }
  */
return 0;
}