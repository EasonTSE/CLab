# include <stdio.h>
# include <stdlib.h>

int main()
{
	int num,n,i,psum = 0,sum = 0;
	printf("請輸入一個正整數: ");
	scanf("%d",&num);

	printf("小於 %d 的完美數包括：", num);
	for (i = 1; i <= num; i++)
	{
		for (n = 1; n < i; n++)
			if (i % n == 0)
				sum += n;

		if (sum == i)
		{
			printf("%d ", sum);
			psum += sum;
		}

		sum = 0;
	}

	printf("\n所有『Perfect Number』的總和為：%d\n", psum);

	return 0;
}
