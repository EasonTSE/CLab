# include <math.h>
# include <stdio.h>
# include <stdlib.h>

char time_is_valid(int,int,int,int);
int timedelta_in_min(int,int,int,int);
void print_calltime(int);
double fee(int,int,int,int,int,int,int,int);

int main()
{
	int w,x,y,z,d,hin,min,hout,mout;

	printf("請輸入尖峰時段(08:00~10:00)前5分鐘，每分鐘收費費用：");
	scanf(" %d", &w);

	printf("請輸入尖峰時段(08:00~10:00)5分鐘後，每分鐘收費費用：");
	scanf(" %d", &x);

	printf("請輸入其餘時段，每分鐘收費費用：");
	scanf(" %d", &z);

	printf("請輸入單通電話通話時間超過幾小時，通話費以8折計算：");
	scanf(" %d", &d);

	//printf("w=%d, x=%d, z=%d, d=%d\n", w,x,z,d);

	int timein_counter = 1;
	char oper;

	do
	{
		do
		{
			printf("請輸入第%d通電話開始通話時間：", timein_counter);
			scanf(" %d %d", &hin, &min);

			printf("請輸入第%d通電話結束通話時間：", timein_counter);
			scanf(" %d %d", &hout, &mout);

			if (time_is_valid(hin,min,hout,mout) == '1')
				printf("開始時間大於結束時間，請重新輸入第%d通電話的通話時間\n", timein_counter);
			else if (time_is_valid(hin,min,hout,mout) == '2')
				printf("時間輸入有誤，請重新輸入第%d通電話的通話時間\n", timein_counter);
		} while (time_is_valid(hin,min,hout,mout) != 'Y');

		print_calltime(timedelta_in_min(hin,min,hout,mout));
		printf("此通通話費需繳%.2lf元\n", fee(hin,min,hout,mout,d,w,x,z));

		do
		{
			printf("是否繼續輸入下一通通話資料(Y/N):");
			scanf(" %c", &oper);
			fflush(stdin);
		} while (oper != 'Y' && oper != 'N');

		if (oper == 'N')
			break;

		timein_counter++;
	} while (oper == 'Y');
	return 0;
}

char time_is_valid(int s_hr, int s_min, int f_hr, int f_min)
{
	if ((f_hr * 60 + f_min) - (s_hr * 60 + s_min) <= 0)
		return '1';
	else if (f_min > 59 || s_min > 59 || s_hr < 0 || f_hr > 24)
		return '2';
	else
		return 'Y';
}

int timedelta_in_min(int s_hr, int s_min, int f_hr, int f_min)
{
	return (f_hr * 60 + f_min) - (s_hr * 60 + s_min);
}

void print_calltime(int min)
{
	int hr = 0;
	while (min >= 60)
	{
		hr++;
		min -= 60;
	}
	printf("總通話時間為：%2d小時%2d分鐘\n", hr, min);
}

double fee(int s_hr, int s_min, int f_hr, int f_min, int d, int w, int x, int z)
{
	int start = s_hr * 60 + s_min;
	int end = f_hr * 60 + f_min;
	double total;

	if ((start <= 480 && end <= 480) || (start >= 600 && end >= 600))
	{
		printf("1\n");
		total = z * (end - start);
	}
	else if (start <= 480 && end >= 600)
	{
		printf("2\n");
		total = z * (480 - start) + w * 5 + x * 55 + z * (end - 600);
	}
	else if (start <= 480 && (end > 480 && end <= 485))
	{
		printf("3\n");
		total = z * (480 - start) + w * (end - 480);
	}
	else if (start <= 480 && (end > 485 && end <= 600))
	{
		printf("4\n");
		total = z * (480 - start) + w * 5 + x * (end - 485);
	}
	else if ((start > 480 && start <= 485) && end <= 485)
	{
		printf("5\n");
		total = w * (end - start);
	}
	else if ((start > 480 && start <= 485) && end <= 600)
	{
		printf("6\n");
		total = w * (485 - start) + x * (end - 485);
	}
	else if ((start > 480 && start <= 485) && end > 600)
	{
		printf("7\n");
		total = w * (485 - start) + x * 55 + z * (end - 600);
	}
	else if ((start > 485 && start <= 600) && end <= 600)
	{
		printf("8\n");
		total = x * (end - start);
	}
	else if ((start > 485 && start <= 600) && end > 600)
	{
		printf("9\n");
		total = x * (600 - start) + z * (end - 600);
	}

	if (end - start > d * 60)
		return total * 0.8;
	else
		return total;
}
