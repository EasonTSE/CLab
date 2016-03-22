# include <stdlib.h>
# include <stdio.h>

int main() {
  int i, sum=0;
  for (i=3;i<=999;i+=3)
    sum+=i;

  printf("3 + 6 + 9 ... + 999 = %d\n", sum);

  return 0;
}
