# include <math.h>
# include <stdio.h>
# include <stdlib.h>

double cal(double,char,double);

int main()
{
	double n1, n2, ans;
	char oper;

	printf("請輸入第一個數\n");
	scanf("%lf", &n1);

	printf("請輸入運算代號\n");
	scanf(" %c", &oper);

	if (oper == 'q')
		ans = cal(n1,'q',0);
	else
	{
		printf("請輸入第二個數\n");
		scanf(" %lf", &n2);
		ans = cal(n1,oper,n2);
	}

	printf("Ans: %.2lf\n", ans);

	do
	{
		printf("請輸入運算代號或e離開\n");
		scanf(" %c", &oper);
		if (oper == 'e')
			break;

		if (oper == 'q')
			ans = cal(ans,'q',0);
		else
		{
			printf("請輸入第二個數\n");
			scanf(" %lf", &n2);
			ans = cal(ans,oper,n2);
		}

		printf("Ans: %.2lf\n", ans);
	} while (oper != 'e');

	return 0;
}

double cal(double n1, char oper, double n2)
{
	switch (oper)
	{
	case '+':
		return n1 + n2;
		break;
	case '-':
		return n1 - n2;
		break;
	case '*':
		return n1 * n2;
		break;
	case '/':
		return n1 / n2;
		break;
	case 's':
		return pow(n1,n2);
		break;
	case 'q':
		return sqrt(n1);
		break;
	case 'm':
		return (int)n1 % (int)n2;
		break;
	case 'c':
		return 0;
		break;
	}
}
