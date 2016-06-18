# include <stdio.h>
# include <stdlib.h>

int payment(int,int,float,int);

int main()
{
	int in_hr, in_min, mile, t_min;

	printf("請輸入上車時間:\n");
	scanf("%d:%d", &in_hr, &in_min);

	printf("請輸入乘車里程\n");
	scanf("%d", &mile);

	printf("請輸入乘車時間\n");
	scanf("%d", &t_min);

	printf("本次搭乘金額為: %d\n", payment(in_hr, in_min, mile, t_min));

	return 0;
}

int payment(int in_hr, int in_min, float mile, int t_min)
{
	int start = in_hr * 60 + in_min + 3;
	int end = start + t_min;
	float e_mile = mile - 1.5;
	int base_fee = 75;
	int distance_fee = e_mile * 5;

	if ((start < 480 && end < 480) || ((start >= 600 && start < 1020) && end < 1020))
		return base_fee + distance_fee + 5 * (end - start);
	else if (start < 480 && end <= 600)
		return base_fee + distance_fee + 5 * (480 - start) + 7 * (end - 480);
	else if ((start > 600 && start < 1020) && end <= 1140)
		return base_fee + distance_fee + 5 * (1020 - start) + 7 * (end - 1020);
	else if (start < 480 && (end > 600 && end < 1020))
		return base_fee + distance_fee + 5 * (480 - start) + 7 * 120 + 5 * (end - 600);
	else if ((start > 600 && start < 1020) && end < 1440)
		return base_fee + distance_fee + 5 * (1020 - start) + 7 * 120 + 5 * (end - 1140);
	else if (((start > 480 && start <= 600) && (end > 480 && end <= 480)) ||
	         ((start > 1020 && start <= 1140) && (end > 1020 && end <= 1140)))
		return base_fee + distance_fee + 7 * (end - start);
	else if ((start > 480 && start <= 600) && (end > 600 && end < 1020))
		return base_fee + distance_fee + 7 * (600 - start) + 5 * (end - 600);
	else if ((start > 1020 && start <= 1140) && (end > 1140 && end <= 1440))
		return base_fee + distance_fee + 7 * (1140 - start) + 5 * (end - 1140);
	else
		return base_fee + distance_fee + 5 * (end - start);
}

