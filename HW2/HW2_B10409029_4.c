#include <stdio.h>
#include <stdlib.h>

int main()
{
	int adult, children, hour, min, total;

inp_participants:
	printf("�п�J�j�H�A�p�ļƶq�G\n");
	scanf("%d %d", &adult, &children);

	if ((adult < 0) || (children < 0))
	{
		printf("�j�H�Τp�ļƶq����������!\n");
		goto inp_participants;
	}

inp_time:
	printf("�п�J���\�ɶ��G\n");
	scanf("%d:%d", &hour, &min);

	if ((hour < 0) || (hour > 23) || (min < 0) || (min > 59))
	{
		printf("�п�J���T���ɶ��I\n");
		goto inp_time;
	}
	else if ( ( ((hour*60 + min) >= 540) && ((hour*60 + min)) <= 660 ) )
	{
		total = (adult * 250 + children * 250 / 2) * 1.1;
		printf("���\�ɬq�A�`���B�G%d\n", total);
	}
	else if ( ( ((hour*60 + min) >= 690) && ((hour*60 + min)) <= 870 ) )
	{
		total = (adult * 450 + children * 450 / 2) * 1.1;
		printf("���\�ɬq�A�`���B�G%d\n", total);
	}
	else if ( ( ((hour*60 + min) >= 1050) && ((hour*60 + min)) <= 1290 ) )
	{
		total = (adult * 550 + children * 550 / 2) * 1.1;
		printf("���\�ɬq�A�`���B�G%d\n", total);
	}
	else
		printf("�D��~�ɶ��I\n");

	return 0;
}
