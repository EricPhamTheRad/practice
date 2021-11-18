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

   inFile = fopen("hello.txt", "r");
   if (inFile == NULL) {
      printf("Could not open file myfile.txt.\n");
      return -1; // -1 indicates error
   }

  scanf("%d %d", &num1, &num2);
  addnum(num1, num2, &sum);
  printf("%d", sum);
return 0;
}