#include <stdio.h>
#include <string.h>
#include <ctype.h>

void addnum(int num1, int num2, int* sum){
  *sum = num1 + num2;
}

int main(void) {
  int sum;
  int num1;
  int num2;
  scanf("%d %d", &num1, &num2);
  addnum(num1, num2, &sum);
  printf("%d", sum);
return 0;
}