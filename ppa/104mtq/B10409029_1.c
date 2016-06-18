# include <stdlib.h>
# include <stdio.h>

double Encode(int);
double EncodeRe(int);

int main()
{
  double req;
  printf("請輸入要幾個數字(最多十位)\n");
  scanf("%lf", &req);

  printf("遞迴方式產生的數字依序為: ");

  int i;
  for (i = 1; i <= req; i++)
    printf("%1.2lf ", EncodeRe(i));

  return 0;
}

double EncodeRe(int n)
{
  if (n > 0)
  {
    double upper = 100*(n+1);
    double lower = (2*n + 1) * (n+2);
    double ext = EncodeRe(n - 1);
    double result = upper / lower * ext;
    return result;
  }
  else
    return 1;
}

int new_number(int num)
{
	int n1 = num / 1000;
	int n2 = num % 1000 / 100;
	int n3 = num % 100 / 10;
	int n4 = num % 10;

	if (n1 < n4)
		return n4 * 1000 + n2 * 100 + n3 * 10 + n1;
	else if (n1 == n4)
		return 8 * 1000 + n2 * 100 + n3 * 10 + 8;
	else
		return num;
}
