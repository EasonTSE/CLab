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

	printf("�п�J�y�p�ɬq(08:00~10:00)�e5�����A�C�������O�O�ΡG");
	scanf(" %d", &w);

	printf("�п�J�y�p�ɬq(08:00~10:00)5������A�C�������O�O�ΡG");
	scanf(" %d", &x);

	printf("�п�J��l�ɬq�A�C�������O�O�ΡG");
	scanf(" %d", &z);

	printf("�п�J��q�q�ܳq�ܮɶ��W�L�X�p�ɡA�q�ܶO�H8��p��G");
	scanf(" %d", &d);

	//printf("w=%d, x=%d, z=%d, d=%d\n", w,x,z,d);

	int timein_counter = 1;
	char oper;

	do
	{
		do
		{
			printf("�п�J��%d�q�q�ܶ}�l�q�ܮɶ��G", timein_counter);
			scanf(" %d %d", &hin, &min);

			printf("�п�J��%d�q�q�ܵ����q�ܮɶ��G", timein_counter);
			scanf(" %d %d", &hout, &mout);

			if (time_is_valid(hin,min,hout,mout) == '1')
				printf("�}�l�ɶ��j�󵲧��ɶ��A�Э��s��J��%d�q�q�ܪ��q�ܮɶ�\n", timein_counter);
			else if (time_is_valid(hin,min,hout,mout) == '2')
				printf("�ɶ���J���~�A�Э��s��J��%d�q�q�ܪ��q�ܮɶ�\n", timein_counter);
		} while (time_is_valid(hin,min,hout,mout) != 'Y');

		print_calltime(timedelta_in_min(hin,min,hout,mout));
		printf("���q�q�ܶO��ú%.2lf��\n", fee(hin,min,hout,mout,d,w,x,z));

		do
		{
			printf("�O�_�~���J�U�@�q�q�ܸ��(Y/N):");
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
	printf("�`�q�ܮɶ����G%2d�p��%2d����\n", hr, min);
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
