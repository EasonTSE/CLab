#include <stdio.h>
#include <stdlib.h>

int *generate(int *ptr, int row, int col);
void show(int *ptr, int n);

int main()
{
  int a[3][5] = {'apple','boy','cat'};
  show(a, 1);
}

void show(int *ptr, int n)
{
  printf("%d\n", *ptr);
}

int *generate(int *ptr, int row, int col)
{
  return 0;
}
