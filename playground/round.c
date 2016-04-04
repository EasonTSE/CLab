# include <stdlib.h>
# include <stdio.h>
# include <math.h>

int main()
{
  float num;

  printf("Input a floating number: ");
  scanf("%f", &num);

  printf("%f is rounded to %.0f.\n", num, round(num));
}
