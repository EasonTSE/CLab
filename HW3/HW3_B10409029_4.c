# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
	srand(time(NULL));
	int answer = rand() % 1000;
	int num, min = 0, max = 1000;

	printf("%d\n", answer);

	int counter = 0;

	while (1)
	{
		printf("請輸入數字(%d~%d)，按0結束：", min, max);
		scanf("%d", &num);

		if (num == answer)
		{
			printf("正解：%d\n", answer);
			counter++;
			break;
		}
		else if (num == 0)
		{
			printf("你已放棄遊戲。\n");
			return 0;
		}
		else if (num >= min && num <= max)
		{
			if (answer < num)
				max = num;

			else if (answer > num)
				min = num;

			printf("猜錯嘍，介於%d~%d\n", min, max);
			counter++;
		}
		else
			printf("請輸入範圍內的數字！\n");
	}
	printf("你已猜測次數：%d\n", counter);
	return 0;
}
