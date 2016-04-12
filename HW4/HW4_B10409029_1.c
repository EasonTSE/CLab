# include <stdio.h>
# include <stdlib.h>

double shoot(int, int);
int isVaild(int, int);

int main()
{
	int hit, t_shoot, all_hit = 0, all_shoot = 0, oper = 1;

	do
	{
		do
		{
			printf("投藍命中數與總數：");
			scanf("%d %d", &hit, &t_shoot);

			if (isVaild(hit, t_shoot) == 0)
			{
				printf("輸入錯誤 (輸入0結束) ");
				scanf("%d", &oper);
			}
			if (oper == 0)
				break;
		} while(isVaild(hit, t_shoot) != 1);

		if (oper == 0)
			break;

		printf("命中率為：%3.2f%% (輸入0結束) ", shoot(hit, t_shoot));

		all_hit += hit;
		all_shoot += t_shoot;

		scanf("%d", &oper);
	} while (oper != 0);

	printf("總命中/投籃數與命中率為：%d/%d %3.2f%%\n",
	       all_hit,
	       all_shoot,
	       shoot(all_hit,all_shoot));
	return 0;
}

double shoot(int hit, int shoot)
{
	return (double)hit / (double)shoot * 100;
}

int isVaild(int n1, int n2)
{
	if (n1 > n2)
		return 0;
	else
		return 1;
}
