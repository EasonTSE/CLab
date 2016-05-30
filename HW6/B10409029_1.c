# include <stdlib.h>
# include <stdio.h>

void calcRose(int,int,int,int);

int main()
{
	int x1, y1, x2, y2, red, yellow, *ptr_red, *ptr_yellow;
	printf("請輸入左下坐標、右上座標: ");
	scanf("%d %d %d %d", x1, y1, x2, y2); 
	return 0;
}

void calcRose(int x1, int y1, int x2, int y2, int *red, int *yellow)
{
	int i, counter;
	for (i = x1; i <= x2; i++)
	{
		if (i % 5 == 0)
			counter++;
	}
}
