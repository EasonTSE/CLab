# include <stdio.h>
# include <stdlib.h>

void calcRose(int,int,int,int);

int main()
{
	int x1, y1, x2, y2, red, yellow, * ptr_red, * ptr_yellow;
	printf("請輸入左下坐標、右上座標: ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	calcRose(x1, y1, x2, y2);
	return 0;
}

void calcRose(int x1, int y1, int x2, int y2)
{
	int i, xcounter=0, ycounter=0;
	for (i = x1; i <= x2; i+=2)
		if (i % 5 == 0)
			xcounter++;
	for (i = y1; i <= y2; i+=2)
		if (i % 5 == 0)
			ycounter++;
		
	printf("xcounter = %d\n", xcounter);
	printf("ycounter = %d\n", ycounter);
	printf("total = %d\n", xcounter*ycounter);
}
