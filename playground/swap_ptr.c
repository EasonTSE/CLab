#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c);
void swap(int *a, int *b);

int main(int argc, char *argv[])
{
	int a = 7, b = 8, c = 6;
	printf("a=%d, b=%d, c=%d\n", a,b,c);
	sort(&a, &b, &c);
	printf("a=%d, b=%d, c=%d\n", a,b,c);
	return 0;	
}

void sort(int *a, int *b, int *c)
{
	if (*a < *c)
		swap(a, c);
	if (*a < *b)
		swap(a, b);
	if (*b < *c)
		swap(b, c);
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
