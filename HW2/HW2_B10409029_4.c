#include <stdio.h>
#include <stdlib.h>

int main()
{
	int adult, children, hour, min, total;

inp_participants:
	printf("請輸入大人，小孩數量：\n");
	scanf("%d %d", &adult, &children);

	if ((adult < 0) || (children < 0))
	{
		printf("大人或小孩數量必須為正數!\n");
		goto inp_participants;
	}

inp_time:
	printf("請輸入用餐時間：\n");
	scanf("%d:%d", &hour, &min);

	if ((hour < 0) || (hour > 23) || (min < 0) || (min > 59))
	{
		printf("請輸入正確的時間！\n");
		goto inp_time;
	}
	else if ( ( ((hour*60 + min) >= 540) && ((hour*60 + min)) <= 660 ) )
	{
		total = (adult * 250 + children * 250 / 2) * 1.1;
		printf("早餐時段，總金額：%d\n", total);
	}
	else if ( ( ((hour*60 + min) >= 690) && ((hour*60 + min)) <= 870 ) )
	{
		total = (adult * 450 + children * 450 / 2) * 1.1;
		printf("午餐時段，總金額：%d\n", total);
	}
	else if ( ( ((hour*60 + min) >= 1050) && ((hour*60 + min)) <= 1290 ) )
	{
		total = (adult * 550 + children * 550 / 2) * 1.1;
		printf("晚餐時段，總金額：%d\n", total);
	}
	else
		printf("非營業時間！\n");

	return 0;
}
