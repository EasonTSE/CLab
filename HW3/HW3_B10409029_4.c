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
		printf("�п�J�Ʀr(%d~%d)�A��0�����G", min, max);
		scanf("%d", &num);

		if (num == answer)
		{
			printf("���ѡG%d\n", answer);
			counter++;
			break;
		}
		else if (num == 0)
		{
			printf("�A�w���C���C\n");
			return 0;
		}
		else if (num >= min && num <= max)
		{
			if (answer < num)
				max = num;

			else if (answer > num)
				min = num;

			printf("�q���ơA����%d~%d\n", min, max);
			counter++;
		}
		else
			printf("�п�J�d�򤺪��Ʀr�I\n");
	}
	printf("�A�w�q�����ơG%d\n", counter);
	return 0;
}
