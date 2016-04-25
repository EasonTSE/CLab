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
	int end = start + t_min - 3;

	float effective_mile = mile - 1.5;
	int base_fee = 75;
	float distance_fee = effective_mile * 2 * 5;

	int i, time_fee = 0;
	for (i = start; i < end; i++)
	{
		if ((i >= 8 * 60 && i < 10 * 60) || (i >= 17 * 60 && i < 19 * 60))
			time_fee += 7;
		else
			time_fee += 5;
	}
	return base_fee + distance_fee + time_fee;
}
