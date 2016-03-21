# include <stdlib.h>
# include <stdio.h>

int main(void) {
  int num1;

  printf("Input a 4-digi integer: ");
  scanf("%d", &num1);
  printf("%d\n", num1);
  printf("%10d\n", num1);
  printf("+%08d\n", num1);

  float num2;
  printf("Input a 6-digi Float: ");
  scanf("%f", &num2);
  printf("%f\n", num2);
  printf("%10.3f\n", num2);
  printf("+%0.2f\n", num2);

  char ch[10];
  printf("Input a English Name: ");
  scanf("%s", ch);
  printf("%s\n", ch);

  return 0;
}
