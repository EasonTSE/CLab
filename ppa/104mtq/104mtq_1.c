# include <stdio.h>
# include <stdlib.h>

double Encode(int);
double EncodeRe(int);

int main()
{
	int num;

	printf("請輸入要幾個數字(最多十位)");
	scanf("%d", &num);

	printf("以遞迴方式產生的數字依序為：");

  int i;
	for (i = 1; i <= num; i++)
		printf("%d ", (int)EncodeRe(i) % 10);

  printf("\n");

  printf("以迴圈方式產生的數字依序為：");
	for (i = 1; i <= num; i++)
		printf("%d ", (int)Encode(i) % 10);

	return 0;
}

double EncodeRe(int n)
{
	if (n > 0)
	{
		double upper = 100 * ((double)n + 1);
		double lower = (2 * (double)n + 1) * ((double)n + 2);
		double ext = EncodeRe(n - 1);
		return upper / lower * ext;
	}
	else
		return 1;
}

double Encode(int n)
{
  int i;
  double current = 1, prev = 1;
  for (i = 1; i <= n; i++)
  {
    double upper = 100 * ((double)i + 1);
    double lower = (2 * (double)i + 1) * ((double)i + 2);
    current = upper / lower * prev;
    prev = current;
  }
  return current;
}
